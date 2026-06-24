#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int temp=n;
    int digits=0;

    while(temp)
    {
        digits++;
        temp/=10;
    }

    temp=n;
    int sum=0;

    while(temp)
    {
        int d=temp%10;
        sum+=pow(d,digits);
        temp/=10;
    }

    if(sum==n) cout<<"Armstrong";
    else cout<<"Not Armstrong";

    return 0;
}