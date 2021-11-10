#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[11][11];
    for(int i=0;i<11;i++)
    {
        for(int j=0; j<11;j++)
        {
            tab[i][j]=i*j;
        }
    }

    for(int j=0;j<11;j++)
    {
        printf("  %d", j);
    }
    printf("\n");

    for(int i=0;i<11;i++)
    {
        printf("%d", i);
        for(int j=0; j<11;j++)
        {
            printf(" %d ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
