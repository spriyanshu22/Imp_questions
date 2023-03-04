#include<stdio.h>
#include<math.h>
void calculate(int *,int *,int *,int *);
int main()
    {
      int a[5], *sum, *avg, *deviation,sum1,avg1,deviation1;
       sum=&sum1;
       avg=&avg1;
       deviation=&deviation1;
       for (int i = 0; i < 5; i++)
       {
        scanf("%d",&a[i]);}
       for (int i = 0; i < 5; i++)
       {
        printf("%d ",a[i]);}
        calculate(a,sum,avg,deviation);
        printf("sum=%d avg=%d deviation=%d",*sum,*avg,*deviation);
       return(0);
    }
   
    void calculate(int *a,int *sum,int *avg,int *deviation)
    {
        *sum = *(a)+*(a+1)+*(a+2)+*(a+3)+*(a+4);
        *avg= *sum/5;
        *deviation = sqrt(pow(*(a)-*avg,2)+pow(*(a+1)-*avg,2)+pow(*(a+2)-*avg,2)+pow(*(a+3)-*avg,2)+pow(*(a+4)-*avg,2)); 
    }