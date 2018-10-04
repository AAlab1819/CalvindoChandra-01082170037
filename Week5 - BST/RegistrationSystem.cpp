#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string nm[n];
    for(int i=0;i<n;i++)
    {
        cin>>nm[i];
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(nm[i]==nm[i-(m+1)])
        {
            m++;
            cout<<nm[i]<<m<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
    }
    return 0;
}
