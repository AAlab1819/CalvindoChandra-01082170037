#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int stdn,k,r[100];
    //stdn=student, k = team size, r = rating
    cin>>stdn>>k;
    vector<int> a;
    set<int> ds;
    //ds=distinct scores
    set<int>::iterator it;
    for(int i=0; i<stdn; i++)
    {
        cin>>r[i];
        ds.insert(r[i]);
    }
    if(ds.size()<k)
        cout<<"NO";
        //this condition applies if its impossible to create a team
    else{
        cout<<"YES"<<endl;
        for(it=ds.begin();it!=ds.end();it++){
            for(int i=0; i<stdn; i++){
                if(r[i]==*it)
                {
                    a.push_back(i+1);
                    break;
                }
            }
        }
        sort(a.begin(),a.end());
        for(int i=0; i<k; i++)
            cout<<a[i]<<" ";
    }
    return 0;
}
