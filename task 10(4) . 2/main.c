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

int main()
{
    int s;
    printf("please enter 1 for swap 2 element , 2 for swap 2 array , 3 for reverse array");
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

    else
    {
        printf("error");
    }

    return 0;
}
