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
#define ll long long
#define mod 1000000007
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))
// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl
#define  nl "\n"
#define mn 1000000
#define ff first
#define ss second
#define gap " "
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve()
{
        string s;
        cin>>s;

        int ans = 0 ;
        int a = 0,b = 0;

        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i] == 'A') a ++;
            else b++;

            if(b>a) 
            {
                ans = 1;
                break;
            } 

        }

        if(s[0] == 'B' || ans == 1 || s[s.size()-1] != 'B') no;
        else yes;
}
int main(){
    fast;

       int t;
       cin>>t;

       while(t--)
       {
            solve();
       }
        
    }