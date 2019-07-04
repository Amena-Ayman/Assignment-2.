#include <stdio.h>
#include <stdlib.h>

void reverse(int *p)
{
    for (int i=4;i>=0;i--)
    {
    printf("\n%d",*(p+i));
}
}
int main()
{
    int a[5],i;
    printf("\n enter 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a);

    return 0;
}
