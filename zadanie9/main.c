#include <stdio.h>
#include <stdlib.h>

int main()
{
float oceny[]={2,3,2,5,5,3,4,5,2,3};
int rozmiartablicy=sizeof(oceny)/sizeof(float);

//srednia ocen
float suma=0;
float srednia;
for(int i=0;i<rozmiartablicy;i++)
{
    suma=suma+oceny[i];
}
srednia=suma/rozmiartablicy;
printf("Srednia ocen: %f\n", srednia);

//najlepsza ocena
float najlepszaocena=0;
for(int i=0; i<rozmiartablicy; i++)
{
    if(oceny[i]>najlepszaocena)
       {
           najlepszaocena=oceny[i];
       }
}
printf("najlepsza ocena: %f\n",najlepszaocena);

//liczba ocen niedostatecznych
int liczband=0;
for(int i=0; i<rozmiartablicy; i++)
{
    if(oceny[i]==2)
    {
        liczband++;
    }
}
printf("liczba niedostatecznych ocen: %d\n", liczband);
//liczba ocen pozytywnych
int liczbapoz=0;
for(int i=0; i<rozmiartablicy; i++)
{
    if(oceny[i]>2)
    {
        liczbapoz++;
    }
}
printf("liczba pozytywnych ocen: %d", liczbapoz);

return 0;
}
