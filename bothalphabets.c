#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    int  res=(ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z');
    printf("%C is a alphabet i.e is :%d",ch,res);
}