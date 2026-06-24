#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a=0,b=1;

    if(n==0){
        cout<<0;
        return 0;
    }

    for(int i=2;i<=n;i++)
    {
        int c=a+b;
        a=b;
        b=c;
    }

    cout<<b;

    return 0;
}