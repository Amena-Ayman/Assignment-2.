#include <stdio.h>
#include <stdlib.h>
#include"header.h"

int advanced_calcolator()
{
   int func1()
   {
        int  i,x,y;

     printf("please enter x");
   scanf("%i",&x);

   printf("please enter y");
   scanf("%i",&y);


    for(i=1;i<=x;i++)
   {
       if(i%y==0)
       {
       printf(" ");
       }
      else
      {
       printf("\t %i", i);
      }
   }
   return 0;
   }

   int func2()
   {    int x,y,a,s,m;
        printf("please enter first number");
    scanf("%i",&x);

    printf("please enter second number");
    scanf("%i",&y);

       int sum()
{
    a= x+y;
    printf("a=%i",a);
}

int sub()
{
    s= x-y;
    printf("\ns=%i",s);
}

int mul()
{
    m= x*y;
    printf("\nm=%i",m);
}

    sum();
    sub();
    mul();

   }

int func3()
{
    int firstop()
{
    printf("normal ticket 50 LE");
}

int secondop()
{
    printf("vip ticket");
}

int theredop()
{
    printf("vip+pop corn");
}
int s;
   printf("please select your option , 1 for normal ticket , 2 for vip ticket , 3 vip+pop corn");
   scanf("%i",&s);
if (s==1)
{
    firstop();
}

if (s==2)
{
    secondop();
}

if (s==3)
{
    theredop();
}
}
 int s;
    printf("please enter number, 1 for reminder ,2 for calcolator , 3 for cinema tickets");
    scanf("%i",&s);
    if(s==1)
    {
        func1();
    }

    if(s==2)
    {
        func2();
    }

    if(s==3)
    {
        func3();
    }
    else
    {
        printf("ERROR");
    }

   return 0;
}


int main()
{

   advanced_calcolator();
    return 0;
}
