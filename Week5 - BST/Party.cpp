#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int e[n+1],j,g,m=0;
  for(int i=1;i<=n;i++) cin>>e[i];
  for(int i=1;i<=n;)
  {
    j=e[i++];
    g=0;
    while(j>0)
    {
      j=e[j];
      g++;
    }
    m=max(m,g);
  }
  cout<<m+1<<endl;
  return 0;
}
