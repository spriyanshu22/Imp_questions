#include<stdio.h>
int sum(int);
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}

int sum(int N)
{
int s=0;
int d=N%10; 
 N=N/10;
if (N==0)
return(d);
else
{
s=d+sum(N);
return s;
}
}