// counting the number of digits in a number recursively
#include<stdio.h>
int digitcount(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digitcount(n));
    return 0;
}
int digitcount(int n)
{
    int count;
   if (n){
    count = digitcount(n/10)+1;
    return count;
    }
    else 
    return 0;
} 