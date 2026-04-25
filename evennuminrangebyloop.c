#include <stdio.h>
int main() 
{
    int count=0;
    for(int i=3;i>=-7;i--)
    {
        if(i%2==0)
        {
            count++;
        }
    }
     printf("There are %d even numbers",count);
    return 0;
}