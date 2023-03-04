 #include <stdio.h> 
#include <string.h> 
int main() 
{
    int T;
    scanf("%d", &T);
    while (T--) 
 {
    int n,a[26],freq[26],sum=0;
    char text[100000];
    
    for (int i = 0; i < 26; i++)
    {
        scanf("%d",&a[i]);
    }
   scanf("%s",text);
   n=strlen(text);
    for (int i = 0; i < n; i++)
    {
        freq[text[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
       if(freq[i]==0)
       sum=sum+a[i];
    }
    printf("%d\n",sum);
  }   
    return 0;
}




