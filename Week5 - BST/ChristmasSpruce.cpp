#include <stdio.h>
#include <iostream>
using namespace std;
int main(void){
  int n,x[1005],y[1005]={};
  bool d[1005]={},r=1;
  scanf("%d",&n);
  for (int i=2;i<=n;i++) d[i]=1;
  for (int i=2;i<=n;i++) {
    scanf("%d",x+i);
    d[x[i]]=0;
  }
  for (int i=2;i<=n;i++)
    if (d[i]) y[x[i]]++;
  for (int i=1;r&&i<=n;i++)
    r=d[i]||y[i]>=3;
  printf("%s\n",r?"Yes":"No");
  return 0;
}
