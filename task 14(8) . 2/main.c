#include <stdio.h>
#include <stdlib.h>

int func()
{
    int x,y,i,j;
    printf("please enter the max value");
    scanf("%i",&x);
    printf("please enter the skipped step");
    scanf("%i",&y);
    for(i=1;i<=x;i++)
    {
        if(i%y==0)
        {
            printf(" ");
        }
        else
       {
           printf("%i",i);
       }

    }

}
int main()
{
    func();

    return 0;
}
