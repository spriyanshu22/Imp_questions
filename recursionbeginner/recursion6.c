// program to find the sum of digits of a number recursively
#include<stdio.h>
int sod(int n);
int sod(int n)
{
    if(n==0)
    return 0;
    else 
    {
        int sum = n%10 + sod(n/10);
        return sum;
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("sum of digits of %d=%d",n,sod(n));
    return 0;

}
