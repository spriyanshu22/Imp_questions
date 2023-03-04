#include <stdio.h> 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n,m,k,freq=0,count=-1;
		int a[1000000];
		scanf("%d %d %d", &n, &m,&k);
		for(int i=0;i<n;i++)
		{
		    scanf("%d",&a[i]);
		    if(a[i]==1)
		    freq++;
		    if(count==0&&a[i]==0)
		    count=i;
		    
		}
	//	printf("#%d#",count);
		if (freq==n)
		printf("100\n");
		else if(count>=m)
		printf("%d\n",k);
		else 
		printf("0\n");

	}

	return 0;
}


