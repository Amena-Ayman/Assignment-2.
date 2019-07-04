#include <stdio.h>
#include <stdlib.h>
int i;
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
int main()
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

    return 0;
}
