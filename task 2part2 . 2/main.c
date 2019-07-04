#include <stdio.h>
#include <stdlib.h>

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

int main()
{
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
    return 0;
}
