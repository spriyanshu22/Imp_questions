// program to convert a decimal number to a binary number
#include<stdio.h>
int binary(int);
int main()
{
    int n; 
    scanf("%d",&n);
    printf("%d in binary = %d",n,binary(n));

}
int binary (int n)
{
    if (n==1)
    return 1;
    else
    {
        int number = n%2+ 10*binary(n/2);
        return number;
    }
    
}