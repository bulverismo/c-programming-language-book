#include <stdio.h>

/* count digits, white space, others */
main()
{
        int c;
        int arranjo[26];


        for (int i = 0; i < 26; ++i)
                arranjo[i] = 0;

        while ((c = getchar()) != EOF)
        {
                if (c >= 'a' && c <= 'z')
                        ++arranjo[c-'a'];
        }

        for (int i = 0; i < 26; ++i)
        {
                printf("%c : ",i+'a');
                for (int j=0; j<arranjo[i]; ++j)
                        printf("#");      
                
                printf("\n");
        }
}
