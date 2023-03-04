// program to print the factorial of a number recursively
#include<stdio.h>
int fac(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d!=%d",n,fac(n));
    return 0;
}
int fac(int n)
{
    if(n==1)
    return 1;
    else {
    int factorial = n*fac(n-1);
    return factorial;
     } 
     }