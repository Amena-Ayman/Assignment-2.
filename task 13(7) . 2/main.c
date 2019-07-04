#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int func1()
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
}

int func2()
{ int i;
void swap(int *p1,int *p2)
{

    for (i=0;i<5;i++)
    {
        *p1= *p1 + *p2;
        *p2= *p1 - *p2;
        *p1= *p1 - *p2;

        p1++;
        p2++;
    }
}

{
    int a[5],b[5];
    printf("please enter 5 numbers for first array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("please enter 5 numbers for second array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
        swap(a,b);

        printf("\n swapped values ");
        for (i=0;i<5;i++)
        {
            printf("\n%d",a[i]);
        }

        for (i=0;i<5;i++)
        {
            printf("\n%d ",b[i]);
        }

}
}
int func3()
{
   void reverse(int *p)
{
    for (int i=4;i>=0;i--)
    {
    printf("\n%d",*(p+i));
}
}

{
    int a[5],i;
    printf("\n enter 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a);

}

}

int func4()
{
 int a[5],n1,n2,i;
    printf("enter 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%i",&a[i]);
    }
    printf("enter the number you want to replace");
      scanf("%i",&n1);
    printf("enter the number which you want to place");
      scanf("%i",&n2);

    for(i=0;i<5;i++)
    {
        if(a[i]==n1)
        {
            a[i]=n2;
        }
    }
    printf("\n updated Array");
    for(i=0;i<5;i++)
    printf("\n%i",a[i]);

}

}

int func5()
{

int x,y,a,s,m;

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

{
    printf("please enter first number");
    scanf("%i",&x);

    printf("please enter second number");
    scanf("%i",&y);

    sum();
    sub();
    mul();

}

}


int main()
{
    int s;
    printf("please enter 1 for swap 2 element , 2 for swap 2 array , 3 for reverse array , 4 for Array entery & change , 5 for calculator");
    scanf("%i",&s);

    if(s==1)
    {
        func1();
    }

 else if(s==2)
    {
        func2();
    }

else if (s==3)
    {
        func3();
    }

    else if (s==4)
    {
        func4();
    }

    else if (s==5)
    {
        func5();
    }
    else
    {
        printf("error");
    }

    return 0;
}
