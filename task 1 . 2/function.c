
int func()
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
}
