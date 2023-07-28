// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
using namespace std; 
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


// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl
#define mn 1000000
#define ff first
#define ss second
#define gap " "


void solve()
{
   int n;
   cin>>n;
   int matrixx[n+5][n];

   for(int i = 1 ; i<=n; i++)
   {
    for(int j = 1 ; j<n; j++)
    {
        cin>>matrixx[i][j];
    }
   }

   map<ll, ll>mp;
   map<ll ,ll>m;

   for(int i = 1; i<=n; i++)
   {
        mp[matrixx[i][n-1]] = i;
        m[matrixx[i][n-1]]++;
   }

   int indx = 0 ,val = 0 ;

   for(auto u : m)
   {
        if(u.second == 1)
        indx = u.first;
        else val = u.first;
   }

   for(int  i = 1; i<n; i++)
   {
   cout<<matrixx[mp[indx]] [i]<<" ";
   }
  //cout<<val<<endl;
}
int main(){

      int t;
      cin>>t; 


      while (t--)
      {

       solve();   
      }

 }
        
     
     
     
 