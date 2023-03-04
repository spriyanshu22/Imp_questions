#include <stdio.h> 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) 
	{
	int n;
   char a[100000],dup;
    scanf("%d",&n);
    
        scanf("%s",a);
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                dup=a[j];
                a[j]=a[j+1];
                a[j+1]=dup;
            }
        }
    }
    printf("%s",a);
}   
	return 0;
}
