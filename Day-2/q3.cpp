#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int prod=1;

    while(n>0){
        prod=prod*(n%10);
        n/=10;
    }

    cout<<prod;

    return 0;
}