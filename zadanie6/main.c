#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[5]={1, 2, 3, 4, 5};
    int tabodw[5];
    for(int i=0; i<5; i++)
    {
        tabodw[i]=tab[4-i];
    }
    printf("Elementy tablicy nieodwroconej to:");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");
    printf("Elementy tablicy odwroconej to:");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",tabodw[i]);
    }

}
