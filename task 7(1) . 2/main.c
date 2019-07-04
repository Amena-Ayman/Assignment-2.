#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,*p1,*p2,temp;
   printf("Enter the value of x&y");
   scanf("%d %d",&x,&y);
   printf("Before swapping x=%d y=%d \n",x,y);

   p1=&x;
   p2=&y;

   temp=*p1;
   *p1=*p2;
   *p2=temp;

   printf("After swapping x=%d y=%d \n",x,y);

    return 0;
}
