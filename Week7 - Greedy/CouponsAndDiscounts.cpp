#include<iostream>
using namespace std;
int main()
{
    long long n,s,flag=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0&&s==1)
        {
            flag=1;
        }
        if(a[i]%2==1)
        {
            s+=1;
            s%=2;
        }
    }
    if(s==0&&flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
