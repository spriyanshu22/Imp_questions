#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[26];
    int a[26];
   scanf("%s",s);
    int T,count=0;
    scanf("%d",&T);
    for (int i = 0; i < 26; i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        a[s[i]-97]++;
    }   
    while(T--)
    {
     char word[100];
     scanf("%s",word);
     int error =0;
     for (int i = 0; i < strlen(word); i++)
     {
       if(a[word[i]-97]==0)
       error ++;
     }
     if(error==0)
     printf("Yes\n");
     else 
     printf("No");    
    }
}
