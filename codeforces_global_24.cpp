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
   
    ll n, algcd = 0 ;
    cin>>n;
    vector<ll>vecc(n);
    for(auto &xx: vecc)
    {
        cin>>xx;
        algcd =__gcd(algcd,xx);
    }
   
    cout<<vecc[n-1]/algcd<<endl;
  
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