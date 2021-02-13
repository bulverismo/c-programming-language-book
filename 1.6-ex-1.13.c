#include <stdio.h>

/* count digits, white space, others */
main()
{
        int c,palavraAtual;
        int arranjo[1000];

        palavraAtual = 0;

        for (int i = 0; i < 1000; ++i)
                arranjo[i] = 0;

        while ((c = getchar()) != EOF)
        {
                if (c == ' ' || c == '\n' || c == '\t')
                        ++palavraAtual;
                else
                        ++arranjo[palavraAtual];
        }

        for (int i = 0; i < 1000; ++i)
        {
                for (int j=0; j<arranjo[i]; ++j)
                        printf("#");      
                
                if ( arranjo[i] != 0 )
                        printf("\n");
        }
}
