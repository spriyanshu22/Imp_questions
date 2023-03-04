// checking whether a number is prime number or not
#include<stdio.h>
void checkprime(int);
int trace=2,count=0;
int main()
{
int n;
printf("enter the number to be checked");
scanf("%d",&n);
checkprime(n);
}
void checkprime(int n)
{
    if (n==1||n==2)
    {
        printf("%d is a prime number",n);
        return;
        /* code */
    }
    
    if(trace>=(n+1)/2){
        if (count>0)
        {
            printf("%d is a composite number",n);
            /* code */
        }
        else 
        printf("%d is a prime number",n);
        
        return;
}
    else {
        if (n%trace==0)
        count ++;
        trace ++;
        checkprime(n) ;      
    }
    
}