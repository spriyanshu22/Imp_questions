#include<stdio.h>
#include<math.h>
int main()
{
 int n,d,c=0,size,num=0;
scanf("%d",&n);
size = (int)(log(n)/log(10));
while(n)
{
    d=n%10; n=n/10;
    num = num+d*pow(10,size);
     size--;
  
}
  printf("%d",num);
return 0;
}