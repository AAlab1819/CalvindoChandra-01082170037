#include <bits/stdc++.h>
#define ll long long
#define SZ(x) ((int)(x).size())
#define scl(x) scanf("%lld", &x)
#define scll(x,y) scanf("%lld %lld", &x, &y)
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;i++)
#define REV(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define pri(a) cout<<a<<endl
#define prii(a,b) cout<<a<<" "<<b<<endl
using namespace std;
ll n,p[1234],w[1234],dp[1234][33];
ll calc(ll i,ll cap)
{
    if(i==n)
    {
        return 0;
    }
    if(dp[i][cap]!=-1)
    {
        return dp[i][cap];
    }
    if(cap<w[i])
    {
        return dp[i][cap]=calc(i+1,cap);
    }
    else
    {
        return dp[i][cap]=max(calc(i+1,cap),calc(i+1,cap-w[i])+p[i]);
    }
}
int main()
{
    ll t,x,g;
    scl(t);
    while(t--)
    {
        scl(n);
        REP(i,n) scll(p[i],w[i]);
        scl(g);
        ll ans=0;
        memset(dp, -1, sizeof dp);
        REP(i,g)
        {
            scl(x);
            ans += calc(0,x);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
