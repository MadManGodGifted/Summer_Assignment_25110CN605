#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        int temp=i;
        int digits=0;

        while(temp)
        {
            digits++;
            temp/=10;
        }

        temp=i;
        int sum=0;

        while(temp)
        {
            int d=temp%10;
            sum+=pow(d,digits);
            temp/=10;
        }

        if(sum==i)
            cout<<i<<" ";
    }

    return 0;
}