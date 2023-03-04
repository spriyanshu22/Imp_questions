#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    binary(n);
}
void binary(int n)
{
    if(n==1) {
    printf("1"); 
    return;}
    int d=n; n=n/2;
    binary(n);
    if(d%2==1)
    printf("1");
    else 
    printf("0");
    
}