// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
using namespace std; 

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pi 3.14 
#define endl "\n"
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;

    ll x = (2*n-2);

    vector<string>v(x);

    for(int i = 0 ; i<x; i++)
    cin>>v[i];
    vector<string>arr;

    for(int i = 0 ; i<x; i++)
    {
        if(v[i].length() == (n-1))
        {
            arr.push_back(v[i]);
        }
    }


    reverse(arr[0].begin(),arr[0].end());

    if(arr[0] == arr[1])
    {
        yes;
    }
    else no;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

