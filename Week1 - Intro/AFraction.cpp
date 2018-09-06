#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long n;
    //n = inputted number
    cout<<"input number: ";
    cin>>n;
    long num=0;
    long d=0;
    //num = numerator d = denominator
    for(long i=1;i<=n/2;i++){
        //the process repeats until i hit the n/2 limit
        if(__gcd(i,n-i)==1){
            //this process started if the GCD of i and n-i is both 1
            num=i;
            d=n-i;
        //if both the numerator and denominator are coprime number, the fraction is irreducible
        //the process loops until a irreducible fraction is made
        }
    }
    cout<<"irreducible numerator: "<<num<<endl;
    cout<<"irreducible denominator: "<<d<<endl;
    return 0;
}
