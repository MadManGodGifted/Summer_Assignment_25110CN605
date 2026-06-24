#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int x=a,y=b;

    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    int lcm=(x*y)/a;

    cout<<lcm;

    return 0;
}