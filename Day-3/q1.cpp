#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool flag=true;

    if(n<=1) flag=false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }

    if(flag) cout<<"Prime";
    else cout<<"Not Prime";

    return 0;
}