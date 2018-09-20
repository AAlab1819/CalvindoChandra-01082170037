#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s;
    //n = amount of lanterns, s = street's length
    cin>>n;
    cin>>s;
    long long l[n];
    //l = position of lanterns
    for(int i=0;i<n;i++)
    {
        cin>>l[i];
    }
    long long temp;
    for(int i=0; i<n-1; i++)
    //bubble sort
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(l[j]>l[j+1])
			{
				temp=l[j];
				l[j]=l[j+1];
				l[j+1]=temp;
			}
		}
	}
    double rad=max(l[0],s-l[n-1]);
	//rad = total light radius from lanterns
	for(int i=0;i<n;i++)
	{
	    rad=max(rad,(l[i]-l[i-1])/2.0);
	}
	printf("%.101f\n",rad);
    return 0;
}
