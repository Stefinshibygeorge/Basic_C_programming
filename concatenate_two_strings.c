#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    printf("Enter the first string");
    gets(str1);
    //scanf("%s",str1);
    printf("Enter the second string");
    gets(str2);
    //scanf("%s",str2);

    int i,j,cnt=0;
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++)
     {
        str1[i]=str2[j];
        i++;
     }
    
    str1[i]='\0';
    puts(str1);
    //printf("%s",str1);
}