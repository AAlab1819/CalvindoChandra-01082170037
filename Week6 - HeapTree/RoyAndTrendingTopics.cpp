#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	priority_queue<pair<long long, int> > pq;
	map<int, long long> m;
	for(int i=0; i<n; i++)
	{
		long long id,z,p,s,l,c;
	    cin>>id>>z>>p>>l>>c>>s;
	    long long nz=(p*50)+(l*5)+(c*10)+(s*20);
	    long long tz=nz-z;
	    m[id]=nz;
	    pq.push(make_pair(tz, id));
	}
	for(int i=0; i<5; i++)
	{
		if(pq.empty())
		{
	       break;
	    }
	    pair<long long, int>val=pq.top();
	    cout<<val.second<<" "<<m[val.second]<<endl;
	    pq.pop();
	}
    return 0;
}
