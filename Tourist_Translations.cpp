#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int T;
    char decode[26]="\0";
    scanf("%d",&T);
    scanf("%s",decode);
    while(T--)
    {
      char text[100];
      scanf("%s",text);
      for(int i=0;i<strlen(text);i++)
      {
          if(text[i]>=97&&text[i]<=122)
          printf("%c",decode[text[i]-97]);
          else if(text[i]=='_')
          printf(" ");
          else if(text[i]>=65&&text[i]<=90)
          printf("%c",decode[text[i]-65]-32);
          else 
          printf("%c",text[i]);
          }
          printf("\n");
      
    }
}