#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
bool compare_less(const int& a,const int& b)
{
    return b < a;
}
bool compare_greater(const int& a,const int& b)
{
    return a < b;
}
int main()
{
    int n,num;
    cin>>n;
    vector<int>n0,n1;
    n0.reserve(n);
    n1.reserve(n);
    float med=nanf("");
    for(int i=0;i<n;i++)
	{
        cin>>num;
        if(isnan(med)||(float)num<=med)
        {
            n0.push_back(x);
            push_heap(n0.begin(),n0.end(),compare_greater);
        }
        else
        {
            n1.push_back(x);
            push_heap(n1.begin(),n1.end(),compare_less);
        }
        while(n1.size()>n0.size()+1)
        {
            x=n1[0];
            pop_heap(n1.begin(),n1.end(),compare_less);
            n1.pop_back();
            n0.push_back(x);
            push_heap(n0.begin(),n0.end(),compare_greater);
        }
        while(n0.size()>n1.size()+1)
        {
            x=n0[0];
            pop_heap(n0.begin(),n0.end(),compare_greater);
            n0.pop_back();
            n1.push_back(x);
            push_heap(n1.begin(),n1.end(),compare_less);
        }
        if(n0.size()>n1.size())
        {
        	med=n0[0];
		}
        else if(n1.size()>n0.size())
        {
        	med=n1[0];
		}
        else
        {
        	med=(n0[0]+n1[0])/2.0f;
		}
        cout<<med<<endl;
    }
    return 0;
}
