// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
#include<string.h>
using namespace std; 
#define ll long long 
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
//    printf(a[0] == mn ? "Bob\n" : "Alice\n");
void solve()
{
    int n;
    cin>>n;
    ll ans =0;
    ll cnt =1;

    vector<ll>v(n);
    lop(i,n)
    {
      cin>>v[i];
    }
    
   sort(v.begin(),v.end());

    lop(i,n)
    {

        if(cnt<=v[i])
        {
            ans+=v[i]-cnt;
            cnt++;
        }
    }
    cout<<ans<<endl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
    int test;
    cin>>test;
    while (test--)
    {
  solve();

    }
    
}