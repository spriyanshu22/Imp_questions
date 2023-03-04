#include<stdio.h>
#include<stdlib.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, *ptr,dup;
		ptr= (int *)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)
		{
		    scanf("%d",(ptr+i));
		}
	for(int i =0;i<n-1;i++)
	{
	    for(int j=0;j<n-i-1;i++)
	    {
	        if (*(ptr+i+1)<*(ptr+i))
	        {
	            dup = *(ptr+i);
	            *(ptr+i)=*(ptr+i+1);
	            *(ptr+i+1)=dup;
	        }
	    }
	}
	for(int i=0;i<n;i++)
		{
		    printf("%d\t",*(ptr+i));
		}
	
}
	return 0;
}
