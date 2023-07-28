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
 
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))

// v.erase(unique(v.begin(),vO.end()),v.end());
#define inf INT_MAX
#define mn 1000000
#define ff first
#define ss second
#define gap " "
int main(){
    fast;

    int test;
    cin>>test;

    while (test--)
    {
        int n , x;
        cin>>n>>x;
        vector<int>v(2*n);

        for(int i = 0 ; i< 2*n ; ++i)
        {
            cin>>v[i];
        }
        int count = 0 ;
        sort(v.begin(),v.end());

        for(int i = 0 ; i<n; ++i)
        {
            if(v[i+n] - v[i] >=x ) count++;
        }
        if(count == n)yes;
        else no;



    }
}