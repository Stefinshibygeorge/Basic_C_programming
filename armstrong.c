#include<stdio.h>
int cnt=0;

int armstrong(int a);
int cubesum(int a);
int digitno(int a);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    armstrong(num);

    if(cubesum(num) == num) 
    printf("Armstrong");
    else
    printf("Non armstrong");
}





int digitno(int a)
{
   do
    {
        a/=10;
        cnt++;
    }while(a!=0);
    return cnt;

}

int cubesum(int a)
{
    int cubesum =0,rem;
        while(a>0)
          {
            rem = a%10;
            cubesum = cubesum+(rem*rem*rem);
            a/=10;
          }
    return cubesum;
}

int armstrong(int a)
{ 
  int y;
    if(cnt == 3)
      return cubesum(y);

}  