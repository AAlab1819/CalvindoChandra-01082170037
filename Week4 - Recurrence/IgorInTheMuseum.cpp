#include <bits/stdc++.h>
using namespace std;
char l[1002][1002];
int s[1002][1002];
int fun(int x,int y,int c)
{
    if (l[x][y]=='*')
    {
        return 1;
    }
    if (s[x][y])
    {
        return 0;
    }
    s[x][y]=c;
    return fun(x-1,y,c)+fun(x+1,y,c)+fun(x,y-1,c)+fun(x,y+1,c);
}
int main() {
    int n,m,k,c[100002]={0},ans;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)
        cin >> l[i][j];
    for(int i=1;i<=k;i++){
        int x,y;
        cin >> x >> y;
        if (s[x][y]) ans=c[s[x][y]]; else {ans=fun(x,y,i); c[i]=ans;}
        cout << ans << endl;
    }
}
