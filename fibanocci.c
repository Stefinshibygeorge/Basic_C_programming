#include<stdio.h>
int main()
{
    int f1=1,f2 =1,temp,n;
    printf("Enter no of fibanocci numbers to print :");
    scanf("%d",&n);
    printf("%d\n%d\n",f1,f2);
 int i;
    for(i=0;i<n-2;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
        printf("%d\n",temp);

    }
    
}