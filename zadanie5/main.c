#include <stdio.h>
#include <stdlib.h>

int main()
{
     float tab[]={1.5, 2.32, 3.1, 34, 3.23, 7.21, 3.67, 8, 9, 10};
     float najwieksza=tab[2];
     float najmniejsza=tab[2];
     int indeksnajwieksza;
     int indeksnajmniejsza;

     for(int i=0;i<10;i++)
    {
         if(tab[i]>najwieksza)
         {
             najwieksza=tab[i];
             indeksnajwieksza=i;
         }
    }
     printf("Najwieksza liczba w tej tablicy to %f a jej indeks to %d\n", najwieksza, indeksnajwieksza);


     for(int j=0;j<10;j++)
    {
         if(tab[j]<najmniejsza)
         {
             najmniejsza=tab[j];
             indeksnajmniejsza=j;
         }
    }
    printf("Najmniejsza liczba w tej tablicy to %f a jej indeks to %d\n", najmniejsza, indeksnajmniejsza);
    return 0;
}

