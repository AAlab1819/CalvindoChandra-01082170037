#include <bits/stdc++.h>
int out,T,Num;
int main()
{
    std::scanf("%d",&T);
    while(T--)
    {
        std::scanf("%d",&Num);
        out+=abs(Num);
    }
    std::printf("%d",out);
}
