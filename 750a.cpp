// NAZMUL ZAMAN _BSC in IT

#include <bits/stdc++.h>
using namespace std; 
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pi 3.14 
#define endl "\n"
#define ll long long
#define mod 1000000007
#define sortA sort(arr,arr+n);
#define sortS sort(s.begin(),s.end());
 
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))

// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl;
//#define mn 1000000
#define ff first
#define ss second
#define gap " "


void solve()
{
     int n;                  cin>>n;
        vector<int> a(n);
        int mn=INT_MAX,mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
 
        int mnCnt=0,mxCnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==mn){
                mnCnt++;
            }
            if(a[i]==mx){
                mxCnt++;
            }
        }
 
        ll ans;
        if(mn==mx){
            ans = (mnCnt*(mnCnt-1));
        }
        else{
            ans = 2LL*(mnCnt*(mxCnt));
        }
 
        cout<<ans<<endl;
}
signed main()
{
    int r;
    cin>>r;
    while (r--)
    {
        /* code */
        solve();
    }
    
}