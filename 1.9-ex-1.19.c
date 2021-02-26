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
       
        len = getlines(line, MAXLINE);
         //   012345 6
        // #p1 p2\n\0#
        // #
        //  43210
        // #2p 1p

        len = len-2;


        while (len >= 0 )
        {
               printf("%c",line[len--]);
        }
        printf("\n");
        
        return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim)
{
        int c, i;
        for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
                s[i] = c;
        if (c == '\n') {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
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
