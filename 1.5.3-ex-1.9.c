#include <stdio.h>
main() 
{
        int c;
        int ant='s';
        while ((c = getchar()) != EOF )
        {
                if (!(ant == ' ' && c == ' '))
                        printf("%c",c);
                ant = c;
        }
}
