#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
