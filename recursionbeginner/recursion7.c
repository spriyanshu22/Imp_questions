// program to find the gcd of two numbers recursively
#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("gcd of %d and %d is= %d",a,b,gcd(a,b));
}
int gcd(int a,int b)
{
    int max,min;
    max=a>b?a:b;
    min = a+b-max;
    if (max%min ==0 )
    return min;
    else 
    return gcd (max, max%min);
}
