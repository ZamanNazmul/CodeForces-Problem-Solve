#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        ll a,b,c;
        cin>>a>>b>>c;
        if((abs(b-c)+abs(c-1))>abs(a-1))
        {
            cout<<1<<endl;
        }
        else if((abs(b-c)+abs(c-1))<abs(a-1))
        {
            cout<<2<<endl;
        }
        else
            cout<<3<<endl;
    }
    return 0;
}