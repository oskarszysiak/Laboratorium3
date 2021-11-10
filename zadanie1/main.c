#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nralbumu=80614;
   for(int i=nralbumu; i<nralbumu+100; i++)
   {
       printf("%d", i);
       if(i%2==0)
       {
           printf("parzysta");
       }
       printf("\n");
   }
   printf("\n");
   printf("\n");
   printf("\n");

   for(int i=nralbumu; i<nralbumu+100; i++)
   {
       if(i==80660)
       {
           continue;
       }
       else if(i==80695)
       {
           break;
       }
       printf("%d", i);
       if(i%2==0)
       {
           printf("parzysta");
       }
       printf("\n");

   }
    return 0;
}
