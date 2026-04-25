#include <stdio.h>

int main() 
{
    int a;
    int b;
    int c;
    printf("Enther the value of a:\n");
    scanf("%d",&a);
    printf("Enther the value of b:\n");
    scanf("%d",&b);
    printf("Enther the value of c:\n");
    scanf("%d",&c);
    if(a==2&&b==2&&c==2)
    {
        printf("10");
    }
    else if(a==b&&b==c&&c==a)
    {
         printf("5");
        
    }
    else
    {
         printf("0");
    }
    return 0;
}