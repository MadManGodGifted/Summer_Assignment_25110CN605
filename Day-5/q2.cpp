#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int temp=n;
    int sum=0;

    while(temp>0)
    {
        int d=temp%10;

        int fact=1;
        for(int i=1;i<=d;i++)
            fact*=i;

        sum+=fact;
        temp/=10;
    }

    if(sum==n)
        cout<<"Strong Number";
    else
        cout<<"Not Strong Number";

    return 0;
}