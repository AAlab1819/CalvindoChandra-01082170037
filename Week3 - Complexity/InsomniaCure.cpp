#include <iostream>
using namespace std;
int main()
{
    long long k,l,m,n,d;
    //k=hit with frying pan, l=tail got shut, m=trampled by heels, n=got threaten by mom, d=amount of dragons (each separated by enter)
    long long scr=0;
    //scr=amounts of scared dragons
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        if(i%k==0)
        {
            scr++;
        }
        else if(i%l==0)
        {
            scr++;
        }
        else if(i%m==0)
        {
            scr++;
        }
        else if(i%n==0)
        {
            scr++;
        }
        //all of these condition applied if the result of i divided by either k,l,m,n have 0 residue
    }
    cout<<scr<<endl;
    return 0;
}
