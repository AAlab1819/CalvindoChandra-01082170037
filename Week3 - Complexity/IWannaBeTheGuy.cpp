#include <iostream>
#include <cstddef>
using namespace std;
int main()
{
    long long n;
    long long t;
    //n=amount of levels in the game, t=total amount of x and y levels
    long long count;
    count=0;
    cin>>n;
    long long p;
    //p=amount of levels x can solve
    cin>>p;
    long long x[p];
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
    }
    long long q;
    //q=amount of levels y can solve
    cin>>q;
    long long y[q];
    for(int i=0;i<q;i++)
    {
        cin>>y[i];
    }
    t=p+q;
    long long c[t];
    //c=combination array from p and q
    for(int i=0;i<p;i++)
    {
        c[i]=x[i];
        //set initial c to equal as x
    }
    for(int i=0;i<t;i++)
    {
        c[i+p]=y[i];
        //set c values that in i+p to be equal as y
    }
    for(int i=0;i<t;++i)
    {
        for(int j=i+1;j<t;)
        {
            if(c[i]==c[j])
            {
                for(int k=j;k<t-1;++k)
                {
                    c[k]=c[k+1];
                }
                --t;
                //set c to equal as c with +1 values and then minus t value by 1, if the value of i in c equals to value of j in c
            }
            else
            {
                ++j;
                //increase j value by 1 if the condition didn't met
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        if(c[i]>n)
        {
            c[i]=NULL;
            count++;
            //set i values in c to NULL and then increase count value if i value in c is more than n
        }
    }
    t=t-count;
    if(t==n)
    {
        cout<<"I become the guy.";
        //occurs if t equals n, therefore winning the game
    }
    else
    {
        cout<<"Oh, my keyboard!";
        //occurs if t not equals n, therefore losing the game
    }
    return 0;
}
