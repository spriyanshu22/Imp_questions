#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
     int n;
     char str[100000];
    int count=0;
    scanf("%d %s",&n,str);
   // printf("#%d %s#",n,str);
    for (int i = 0; i < n-1; i++)
    {
       if(str[i]!=str[i+1])
       count++;
       
    }

    printf("%d\n",count+1);
    }
}