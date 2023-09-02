#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
       printf("Capital");
    else if (ch>='a'&& ch<='z')
       printf("small");
    else 
       printf("Not an alpabet");

}