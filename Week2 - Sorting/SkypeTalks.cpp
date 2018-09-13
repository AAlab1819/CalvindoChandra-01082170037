#include <iostream>
using namespace std;
int main()
{
    long long n;
    //n = number of secretaries
    cin>>n;
    long long c[n];
    //c = call id of secretaries (separated by space)
    long long s;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0; i<n-1; i++)
    //bubble sort
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(c[j]>c[j+1])
			{
				s=c[j];
				c[j]=c[j+1];
				c[j+1]=s;
			}
		}
	}
    long long t=0;
    //t = total of duplicate secretary ids
    for(int i=0;i<n;i++)
    {
        if(c[i]==c[i+1]&&c[i]!=c[i+2]&&c[i]!=0)
        {
            t++;
            i++;
            //these conditions apply if c equals c+1, but not c+2 and 0
        }
        else if(c[i]==c[i+1]&&c[i]==c[i+2]&&c[i]!=0)
        {
            t=-1;
            break;
            //these conditions apply if c equals c+1 and c+2, but not 0
        }
    }
    cout<<t;
    return 0;
}
