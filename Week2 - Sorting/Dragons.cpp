#include <iostream>
using namespace std;
void insertionsort(long long arr1[],long long arr2[],long long amount)
//Function to sort dragon strength array and reassign victory bonus to each dragon
{
   //arr1[] = d[]
   //arr2[] = b[]
   long long a;
   long long pass;
   long long b;
   long long c;
   for (a=1;a<amount;a++)
   {
       pass=arr1[a];
       c=arr2[a];
       b=a-1;
       //Sort dragon strength array and reinstate victory bonuses to each dragon in the new sorted array
       while (b>=0&&arr1[b]>pass)
       {
           arr1[b+1]=arr1[b];
           arr2[b+1]=arr2[b];
           b=b-1;
       }
       arr1[b+1]=pass;
       arr2[b+1]=c;
   }
}
int main()
{
    long long k,n;
    //k = kirito's strength, n = number of dragons
    cin>>k>>n;
    long long d[n],b[n];
    //d = dragon's strength, b = bonus strength from d (both separated by space, and continued by enter)
    for(int i=0;i<n;i++)
    {
        cin>>d[i]>>b[i];
    }
    insertionsort(d,b,n);
    for(int i=0;i<n;i++)
    {
        if(k>d[i])
        {
            k+=b[i];
            //k gets more strength from b, if k's value is more than d's
        }
        else if(k<d[i])
        {
            k=k;
            //k remain it's value if k's value is less than d's
            cout<<"NO";
            break;
        }
        if(i==n-1)
        {
            cout<<"YES";
            //this applies if i hits n's value, and  k's total value is more than every d's value
        }
    }
    return 0;
}
