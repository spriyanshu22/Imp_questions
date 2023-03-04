// recursion code to print sum of first n numbers going n to 1(actually 1 to n)
#include<stdio.h>
int sum(int counter);
int main()
{
    int n;
    scanf("%d",&n);
    printf("sum of first %d numbers =%d",n,sum(n));
}
int sum(int counter)
{
   int s;
    if(counter-1)
  {
    s = counter + sum(--counter);
    return s;
  }
  else
   return 1;

}