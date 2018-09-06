#include <iostream>
using namespace std;
int main()
{
    int y,b;
    //y = yellow crystal, b = blue crystal
    //when inputting values, values are separated by space
    cout<<"input yellow and blue crystals: ";
    cin>>y>>b;
    int Y,G,B;
    //Y = yellow ball, G = green ball, B = blue ball
    cout<<"input yellow, green, and blue balls: ";
    cin>>Y>>G>>B;
    y=y-(Y*2);
    y=y-G;
    //residue of y after used for Y and G (since Y uses 2 y, and G uses 1 y)
    b=b-(B*3);
    b=b-G;
    //residue of b after used for B and G (since B uses 3 b, and G uses 1 b)
    int a=0;
    //a = initial answer = 0
    if(b<0)
    {
        a+=(b*0);
    }
    else
    {
        a+=b;
    }
    if(y<0)
    {
        a+=(y*0);
    }
    else
    {
        a+=y;
    }
    //these condition applied for y or b if y or b residue less than 0 respectively
    cout<<"total residue crystals: "<<a;
    //the total residue of both y and b
    return 0;
}
