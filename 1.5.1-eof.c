#include <stdio.h>
/* copy input to output; 1st version */
main()
{
        int c;
        c = getchar();
        while (c != EOF) {
                putchar(c);
                c = getchar();
        }
        putchar(c);
        printf("%c\n",-1);
        printf("%d\n",c);
}
