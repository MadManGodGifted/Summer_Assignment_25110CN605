#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        if(i<2) continue;

        bool prime=true;

        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }

        if(prime) cout<<i<<" ";
    }

    return 0;
}