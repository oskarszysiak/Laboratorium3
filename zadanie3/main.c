#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zdanie0[100]="Zadanie trzecie wprowadzenie do informatyki";
    for (int i=0; i<100; i++)
    {
        printf("%c", zdanie0[i]);
    }
    printf("\n");
    char zdanie1[100];
    scanf("%s", zdanie1);
     for (int a=0; a<100; a++)
    {
        printf("%c", zdanie1[a]);
    }


}
