#include<stdio.h>
int fibo(int);
int main()
{
    int n;
    printf("enter the term which you want");
    scanf("%d",&n);
   printf("%d",fibo(n));
}
int fibo(int n)
{
  //  printf("fibo%d\n",n);
    if(n==0||n==1)
    return n;
    else
    {
        return(fibo(n-1)+fibo(n-2));
    }
}