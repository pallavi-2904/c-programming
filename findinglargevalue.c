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
    if((c>a)&&(c>b))
    {
        printf("largest value:%d\n",c);
        if(a>b)
        {
            printf("mid value:%d\n",a);
            printf("small value:%d\n",b);
           
        }
        else
        {
            printf("mid value:%d\n",b);
            printf("small value:%d\n",a);
        }
    }
    else if((b>a)&&(b>c))
    {
        printf("largest value:%d\n",b);
        if(a>c)
        {
            printf("mid value:%d\n",a);
            printf("small value:%d\n",c);
        }
        else
        {
            printf("mid value:%d\n",c);
            printf("small value:%d\n",a);
        }
    }
    else
    {
        
        printf("largest value:%d\n",a);
        if(b>c)
        {
            printf("mid value:%d\n",b);
            printf("small value:%d\n",c);
        }
        else
        {
            printf("mid value:%d\n",c);
            printf("small value:%d\n",b);
        }
    }
    

    return 0;
}