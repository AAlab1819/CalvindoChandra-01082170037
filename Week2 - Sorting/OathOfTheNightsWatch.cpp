#include <iostream>

using namespace std;

void mergeback (long long *arr, long long low, long long high, long long mid)
{
    long long a;
    long long b;
    long long c;
    long long d[high-low+1];          //Temporary array

    a = low;            //Lower part
    c = 0;              //Index for checking
    b = mid+1;          //Higher part

    //Merge the two parts to the temporary array d[]
    while (a <= mid && b <= high)
    {
        if (arr[a] < arr[b])
        {
            d[c] = arr[a];
            c++;
            a++;
        }
        else
        {
            d[c] = arr[b];
            c++;
            b++;
        }
    }

    //Insert values from i to mid into d[]
    while (a <= mid)
    {
        d[c] = arr[a];
        c++;
        a++;
    }

    //Insert values from mid to high into d[]
    while (b <= high)
    {
        d[c] = arr[b];
        c++;
        b++;
    }

    //Construct sorted array based on d[]
    for (a = low; a <= high; a++)
    {
        arr[a] = d[a-low];
    }
}

//Function to split arrays (tree)
void mergesort(long long *arr, long long low, long long high)
{
    long long mid;
    if (low < high)
    {
        mid = (low+high)/2;                 //Declare middle part (will be split)

        //Split the array until there is no more to be split
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);


        mergeback(arr, low, high, mid);         //Merge the array back
    }
}
int main()
{
    long long n;
    long long mx,mn;
    long long t=0;
    //n = number of stewards, s = strengh of stewards (separated by space)
    //mx = max value of steward's strengh, mn = min value of steward's strengh
    //t = total amount of accepted stewards
    cin>>n;
    long long s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        //input amount of s until n times
    }
    mx=s[0];
    //initial mx = 0
    mn=s[0];
    //initial mn = 0
    mergesort(s,0,n-1);
    for(int i=0;i<n;i++)
    {
        if(s[i]>mx)
        {
            mx=s[i];
            //if there's a bigger s than mx, set s as mx
        }
        else if(s[i]<mn)
        {
            mn=s[i];
            //if there's a smaller s than mn, set s as mn
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]<mx&&s[i]>mn)
        {
            t++;
            //if the amount of s is smaller than mx, and greater than mn, then value of t increased by 1
        }
        //the process repeats until the amount of i is same with n
    }
    cout<<t<<endl;
    return 0;
}
