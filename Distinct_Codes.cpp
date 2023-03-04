#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
      char s[10000];
      scanf("%s",s);
      
      int count=0,error;
    for (int i=0; s[i+1]!='\0'; i++)
      {
        error=0;
        for(int j=i+1;j<s[i+1]!='\0';j++)
        {
            if(s[j]==s[i]&&s[j+1]==s[i+1])
            {
           // printf("#%c%c %c%c#",s[i],s[i+1],s[j],s[j+1]);
            error++;
            }
        }
        if(error==0)
        count++;
      }
     printf("%d\n",count);
    }
}
