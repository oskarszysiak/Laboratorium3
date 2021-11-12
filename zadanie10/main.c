#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int l[10];
        srand(time(NULL));
        for(int i=0;i<10;i++)
        {
            l[i]=rand()%100;
        }

        for(int i=0;i<10;i++)
        {
            printf("%d\t",l[i]);
        }


        printf("\n");


        int przechowalnia;
        for(int i=0; i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(l[j]>l[j+1])
                {
                    przechowalnia=l[j];
                    l[j]=l[j+1];
                    l[j+1]=przechowalnia;
                }
            }
        }

        for(int i=0;i<10;i++)
        {
            printf("%d\t",l[i]);
        }
        return 0;
}
