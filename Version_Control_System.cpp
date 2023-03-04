#include<stdio.h>
#include<stdlib.h>

int main(void) {
int T;
scanf("%d",&T);
for(int t=0;t<T;t++)
{
    int N,M,K;
   scanf("%d %d %d",&N,&M,&K);
   int * m = (int *)malloc(M*sizeof(int));
   int * k= (int *)malloc(K*sizeof(int));
    for(int i=0;i<M;i++)
    {
        scanf("%d",(m+i));
    }
    for(int i=0;i<K;i++)
    {
        scanf("%d",(k+i));
    }
    int count1 =0;
    int count2 =0;
    int c1,c2;
    for(int i = 0;i<100;i++)
    {
     c1=c2=0;
     
     for(int x=0;x<M;x++)
     {
         if(*(m+x)==i+1)
         {c1++;
         }
     }
     
      for(int x=0;x<K;x++)
     {
         if(*(k+x)==i+1)
         {c2++;
        }
     }
     if(c1>0&&c2>0)
     count1++;
     if((c1==0&&c2>0)||(c2==0&&c1>0))
     count2++;
    }
    printf("%d %d\n",count1,N-count1-count2);
    count1=count2=0;
}
	return 0;
}

