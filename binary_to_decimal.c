#include<stdio.h>
#include<math.h>
int main()
{
    int b[64];
    int dec=0,bin,i;
   
    printf("Enter the binary numbers: ");
    scanf("%d",&bin);
    for(i=0;i<64;i++)
    { 
      int rem =bin%10; 
      if(rem == 0|| rem ==1) 
      {
      b[i]=rem;
      bin/=10;
      }
      else
      {
       printf("Number entered is not binary");
       i=-1;
       break;
      }
    }


     if(i!=-1)
     {
          for(i=1;i<64;i++)
             {
               dec+=b[i]*pow(2,i);
             }
        printf("\nDecimal is: %d",dec);
     }

}



