#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    int n;
    ll L;
    cin>>n>>L;
    vector<ll> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=n-2;i>=0;i--)
    {
        c[i]=min(c[i],c[i+1]);
    }
    for(int i=1;i<n;i++)
    {
        c[i]=min(c[i],2*c[i-1]);
    }
    ll ans = 0;
    for(int i=0;i<n-1;i++)
    {
        ans += c[i]*((L>>i)&1);
        ans = min(ans,c[i+1]);
    }
    ans+=(L>>(n-1))*c[n-1];
    cout<<ans<<endl;
    return 0;
}
