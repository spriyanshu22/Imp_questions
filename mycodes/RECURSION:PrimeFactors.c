#include<stdio.h>
void factors(int, int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    factors(n,2);
    return 0;
}
void factors(int n,int i)
{
if (i<=n)
{
    if(n%i==0){
    printf("%d ",i); n=n/i;}
    else 
    i++;
    factors(n,i);
}
}
