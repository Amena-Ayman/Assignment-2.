#include <stdio.h>
#include <stdlib.h>



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

int main()
{
    printf("please enter first number");
    scanf("%i",&x);

    printf("please enter second number");
    scanf("%i",&y);

    sum();
    sub();
    mul();

    return 0;
}
