#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab[]={1.5, 2.32, 3.1, 34, 3.23, 7.21, 3.67, 8, 9, 10};
    float suma=0;
    for(int i=0; i<10; i++)
    {
        printf("Element nr %d jest rowny %f\n", i, tab[i]);
    }

    for(int p=0; p<10; p++)
    {
        suma=suma+tab[p];
    }
    printf("Suma 10 liczb z tablicy wynosi %f", suma);
    return 0;
}
