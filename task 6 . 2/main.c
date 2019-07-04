#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r;
  printf("please enter the number of rows");
  scanf("%i",&r);
  for(i=0;i<r;i++)
  {
   for(j=1;j<=r-i;j++)
      {
          printf(" ");
     }

   for(j=0;j<=i*2;j++)
      {
          printf("*");
     }

printf("\n");

  }



    return 0;
}
