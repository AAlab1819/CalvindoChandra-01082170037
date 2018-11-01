#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,i,m,l,t,r;
	cin>>n;
	long long suma[n],a[n],b[n],sumb[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	suma[0]=a[0];
	sumb[0]=b[0];
	for(i=1;i<n;i++){
		suma[i]=suma[i-1]+a[i];
		sumb[i]=sumb[i-1]+b[i];
	}
	cin>>m;
	while(m--){
		cin>>t>>l>>r;
		if(t==1){
			cout<<suma[r-1]-suma[l-1]+a[l-1]<<endl;
		}
		else{
			cout<<sumb[r-1]-sumb[l-1]+b[l-1]<<endl;
		}
	}
	return 0;
}
