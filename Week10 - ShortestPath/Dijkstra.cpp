#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<pair<int,ll> >v[1000005];
ll inf=100000000000000;
ll dis[1000005];
int parent[1000005];


void dijkstra(int s)
{
    dis[s]=0;
    parent[s]=s;
    priority_queue<pair<ll,int>,vector<pair<ll,int> >,greater<pair<ll,int> > >q;
    q.push({0,s});
    while(!q.empty())
    {
        int z=q.top().first;
        int a=q.top().second;
        q.pop();
        for(int i=0; i<v[a].size(); i++)
        {
            int g=v[a][i].first;
            int h=v[a][i].second;
            if(dis[g]>h+dis[a])
            {
                dis[g]=h+dis[a];
                parent[g]=a;
                q.push({dis[g],g});
            }

        }

    }

}

void print(int x)
{
    if(x==1)
    {
        cout<<1;
        return;
    }
    print(parent[x]);
    cout<<" "<<x;
}

int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        v[x].push_back({y,w});
        v[y].push_back({x,w});
    }
    for(int i=0; i<=n; i++)
    {
        dis[i]=inf;
    }
    dijkstra(1);
    if(dis[n]==inf)
        cout<<"-1"<<endl;
    else
        print(n);
    return 0;

}
