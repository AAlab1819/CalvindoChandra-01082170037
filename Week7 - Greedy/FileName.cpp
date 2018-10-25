#include <iostream>
using namespace std;
int main()
{
    int n;
	cin>>n;
    char a[n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='x'&&a[i+1]=='x'&&a[i+2]=='x')
        {
            t++;
        }
    }
    cout<<t;
    return 0;
}
