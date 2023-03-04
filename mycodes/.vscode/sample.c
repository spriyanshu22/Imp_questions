#include <stdio.h>

int main(void) {
     int t;
  scanf ("%d", &t);
  while (t-- > 0)
    {
      int n;
      long long int m;
      scanf ("%d %lld", &n, &m);
      int i, j;
      long long int a[n], tem;
      for (i = 0; i < n; ++i)
  {
    scanf ("%lld ", &a[i]);
  }
      for (i = 0; i < n; ++i)
  {
    for (j = i + 1; j < n; ++j)
      {
        if (a[i] < a[j])
    {
        tem = a[i];
      a[i] = a[j];
      a[j] = tem;
    }
      }
  }
      long long int sum = 0, sum1= 0;
      int count = 0;
      for(i =0; i<n; i++) {
          sum1 = sum1 + a[i];
      }
      for (i = 0; i < n; i++)
  {
    sum = sum + a[i];
    count++;
    if (sum >= m)
      break;
  }
  if(sum1>= m) {
      printf ("%d\n", count);
  }
  else printf("-1\n");
    }
  // your code goes here
  return 0;
  #include <bits/stdc++.h>  
  #include <stdio.h>
  #include <stdlib.h>
  int main()
  {
      int t;
      scanf(%d,&t);
      for(int i=1;i<=t;i++) {
       cout << "Case #" << i+1 << ": ";
          solve();
      }
      return 0;
  }
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf(
,&t);
    for(int i=1;i<=t;i++) {
     cout << "Case #" << i+1 << ": ";
        solve();
    }
    return 0;
}

