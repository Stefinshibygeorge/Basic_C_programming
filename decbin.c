#include<stdio.h>
int main()
{
  int dec,bin[64];
  printf("Enter the number: ");
  scanf("%d",&dec);

   int i;
   for(i=0;dec!=0;i++)
  {
    bin[i]=dec%2;
    dec/=2;
  }

  printf("Binary will be :");
  
  for(i--;i>=0;i--)
  {

    printf("%d ",bin[i]);
  }


}