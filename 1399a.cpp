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
#define mn 1000000
#define ff first
#define ss second
#define gap " "
  
    int main(){
        fast;

     
        int t,flag,i,n;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        int a[n];
        //for(i=0; i<n; i++)
        lop(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);

         for(i=1; i<n; i++)
        //lop1(i,n+1)
        {
            if(a[i]-a[i-1]>1)
            {
                flag=1;
                 no;
                break;
            }
        }
        if(flag==0)
      
            yes;
    } 

        return 0;
 }


        
     