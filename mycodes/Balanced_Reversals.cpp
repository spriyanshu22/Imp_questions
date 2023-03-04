#include <stdio.h> 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n,c=0;
		scanf("%d", &n);
      char a[200000];
      scanf("%s",a);
	for (int i=0;i<n/2;i++)
	{
	    if (a[n-i-1]!=a[i])
	    c++;
	}
	for (int i=0;i<n/2-1;i++)
	{
	    if (a[n-i-1]!=a[i]&&a[n-i-1]==a[n-i-2]&&a[i]==a[i+1])
	    {
	    c--;
	    i++;
      	}
	}
	printf("%d\n",c);
	}

	return 0;
}