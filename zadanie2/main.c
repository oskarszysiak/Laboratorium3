#include <stdio.h>
#include <stdlib.h>

int main()
{
  //tablica jednowymiarowa I sposób
  int tablica1[3];
  tablica1[0]=3;
  tablica1[1]=2;
  tablica1[2]=5;

  for(int i=0; i<3; i++)
  {
      printf("W tablicy numer %d jest liczba %d\n", i, tablica1[i]);
  }

  printf("\n");
  //tablica jednowymiarowa II sposób
  float tablica2[]={8.1, 1.5, 5.2};
  for(int p=0; p<3; p++)
  {
      printf("W tablicy numer %d jest liczba %f\n", p, tablica2[p]);
  }
  printf("\n");
  //tablica 2 wymiarowa I sposób
  int tablica3[2][2];
  tablica3[0][0]=1;
  tablica3[0][1]=3;
  tablica3[1][0]=5;
  tablica3[1][1]=8;
  for (int a=0; a<2; a++)
  {
      for(int b=0; b<2; b++)
      {
          printf("Tablica o wierszu nr %d i kolumnie nr %d ma wartosc %d\n",a,b,tablica3[a][b]);
      }
  }
  printf("\n");
  //tablica 2 wymiarowa II sposób
  char tablica4[2][2]={{'a','b',},{'c','d'}};
  for (int f=0; f<2; f++)
  {
      for(int g=0; g<2; g++)
      {
          printf("Tablica o wierszu nr %d i kolumnie nr %d ma znak %c\n",f,g,tablica4[f][g]);
      }
  }
  return 0;
}
