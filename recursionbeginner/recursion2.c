// recursion code to print sum of first n numbers going 1 to n(actually n to 1)
#include<stdio.h>
int s=0,n;
int sum(int d);
int main()    
    {  
    scanf("%d",&n);
   int sfinal = sum(1);
   printf("sum of first %d numbers is =%d",n,sfinal);
   }
   int sum(int counter)
   {
    if(counter <=n)
    s= counter + sum(++counter);
    return s;
   }
