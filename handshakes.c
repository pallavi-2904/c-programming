#include <stdio.h>
int main() 
{
    int i;
    int n;
    printf("Enter the numbersof people inside the room");
    scanf("%d",&n);
    int sum=0;
    for(i=(n-1);i>=1;i--)
    {
        sum=sum+i;
    }
     printf("Total handshakes are %d \n",sum);
    return 0;
}