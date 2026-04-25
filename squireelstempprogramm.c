#include <stdio.h>

int main() 
{
   int temp;
   printf("Enter the number of temp:\n");
   scanf("%d",&temp);
   int summer;
   printf("Enter 1 for summer and 0 for not summer:\n");
   scanf("%d",&summer);
   if(summer==1)
   {
       if(temp>=60&&temp<=100)
       {
           printf("true");
       }
       else
       {
           printf("false");
       }
   }
   else
   {
       if(temp>=40&&temp<=90)
       {
           printf("true");
       }
       else
       {
           printf("false");
       }
   }
   
    return 0;
}