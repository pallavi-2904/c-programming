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
    int ab=a+b;
    int bc=b+c;
    int ac=a+c;
    if(ab==10||bc==10||ac==10)
    {
        printf("10");
    }
    else if(a>10||b>10||c>10)
    {
         printf("5");
        
    }
    else
    {
         printf("0");
    }
    return 0;
}