// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
using namespace std; 
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pi 3.14 
#define ll long long
#define mod 1000000007
#define inf INT_MAX
#define nn cout<<endl
#define mn 1000000
#define gap " "

void solve() {

    int n;
    cin>>n;
    vector<ll>v(n);

    lop(i,n)
    {
        cin>>v[i];
    }

    ll ans = 0 ;
    priority_queue<ll>pq;

    lop(i,n)
    {
        if(v[i] == 0)
        {
            if(pq.empty())
            continue;
            ans+=pq.top();
            pq.pop();
        }
        else
        {
            pq.push(v[i]);

        }
    }
    cout<<ans<<endl;

}

int main() {
    
    fast;
    int t;
    cin >> t;

    while (t--) {
    
        solve();
    }

    return 0;
}
