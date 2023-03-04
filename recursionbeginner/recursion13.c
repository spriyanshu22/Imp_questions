// program to print the lcm of two numbers recursivley
#include<stdio.h>
int lcm(int, int);
int count=0;
int main (){
    int a,b;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    printf("lcm of %d and %d is = %d",a,b,lcm(a,b));
    return 0;
}
int lcm (int a ,int b)
{
    if( count ==0) count=a>b?a:b;
   printf("#%d#",count);
    
    if(count%a!=0||count%b!=0)
    {
        count ++;
        lcm(a,b);
        if(count%a==0&&count%b==0)
    {
        return count;
    }
    }
    if(count%a==0&&count%b==0)
    {
        return count;
    }
}