#include <bits/stdc++.h>
using namespace std;
#define MN 4005
int n,m,d[MN];
bool g[MN][MN], can;
void dfs(int u)
{
	for(int v = 1 ; v <= n; v++)
	{
		if(g[u][v] != can) continue;

		if(d[v] > d[u]+1)
		{
			d[v] = d[u]+1;
			dfs(v);
		}
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	memset(g, 0, sizeof g);
	for(int i=1; i <= m; i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		g[u][v] = g[v][u] = 1;
	}
	if(g[1][n] ) can = 0;
	else can = 1;
	memset(d, 0x3f3f3f, sizeof d);
	d[1] = 0;
	dfs(1);
	if(d[n] >= 0x3f3f3f) printf("-1\n");
	else printf("%d",d[n]);
	return 0;
}
