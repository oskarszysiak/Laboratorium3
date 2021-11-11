#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zdanie[]="KOD CEZARA";
    int liczbaznakow;
    liczbaznakow=sizeof(zdanie)/sizeof(char);
    char zaszyfrowanezdanie[liczbaznakow];
    char odszyfrowanezdanie[liczbaznakow];
    const int ileprzesuwamy=1;
    int t;
    int u;
   //szyfrowanie
    for(int i=0; i<liczbaznakow-1; i++)
    {
        if(zdanie[i]==' ')
        {
            zaszyfrowanezdanie[i]=' ';
            continue;
        }
        t=zdanie[i]+ileprzesuwamy;
        if(t<65)
        {
            zaszyfrowanezdanie[i]=zdanie[i]+ileprzesuwamy+26;
        }
        else if(t>90)
        {
            zaszyfrowanezdanie[i]=zdanie[i]+ileprzesuwamy-26;
        }
        else
        zaszyfrowanezdanie[i]=zdanie[i]+ileprzesuwamy;
    }



    printf("zaszyfrowane zdanie:\n");
    for(int i=0; i<liczbaznakow-1; i++)
    {
        printf("%c",zaszyfrowanezdanie[i]);
    }
    printf("\n");



    //deszyfrowanie
    for(int i=0; i<liczbaznakow-1; i++)
    {
        if(zaszyfrowanezdanie[i]==' ')
        {
            odszyfrowanezdanie[i]=' ';
            continue;
        }
        u=zaszyfrowanezdanie[i]-ileprzesuwamy;
        if(u<65)
        {
            odszyfrowanezdanie[i]=zaszyfrowanezdanie[i]-ileprzesuwamy+26;
        }
        else if(u>90)
        {
            odszyfrowanezdanie[i]=zaszyfrowanezdanie[i]-ileprzesuwamy-26;
        }
        else
        odszyfrowanezdanie[i]=zaszyfrowanezdanie[i]-ileprzesuwamy;
    }


    printf("odszyfrowane zdanie:\n");
    for(int i=0; i<liczbaznakow-1; i++)
    {
        printf("%c",odszyfrowanezdanie[i]);
    }
}
