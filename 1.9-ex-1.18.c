#include <stdio.h>
#define MAXLINE 1000
/* maximum input line size */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);
/* print longest input line */

main()
{
        int len;
        int max;
        
        char line[MAXLINE];
        char longest[MAXLINE];
       
        max = 0;
        while ((len = getlines(line, MAXLINE)) > 0 )
        {
                if (len > max) {
                        max = len;
                        copy(longest, line);
                }
                
                printf("%d\n",len);
                printf("#%s#",line);
        }
        if (max > 0)
                printf("%s", longest);
        return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim)
{
        int c, i=0, j=0;
        for (i; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        {
                printf("=%x",c);
                s[i] = c;
                if (c == ' ' || c == '\t')
                        j++;  
                if (c != ' ' && c != '\t' && c != '\n')
                        j=0;
        }
        if (c == '\n') {
                printf("%d %d %d\n",i,j,i-j);
                s[i-j] = c;
                if ( s[0] != '\n')
                        ++i;
        }
        printf("%d %d %d\n",i,j,i-j);
        s[(i-j)] = '\0';
        return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
        int i;

        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
}
