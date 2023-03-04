// printing fibonacci terms using recursion
#include<stdio.h>
void fibo(int n1 ,int n2, int count);
int main (){
    int n ;
    scanf("%d",&n);
    printf("#1# #1# ");
    fibo(1,1,n);
}
void fibo(int n1,int n2,int count)
{
    if (count-2)
    {
       int dup;
        printf("#%d# ",n1+n2);
        dup = n1;
        n1=n2;
        n2=n2+dup;
        fibo(n1,n2,--count);
    }
}