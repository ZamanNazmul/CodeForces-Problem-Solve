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
#define nn cout<<endl
#define mn 1000000
#define ff first
#define ss second
#define gap " "
void solve()
{
      int n;
      cin>>n;

      vector<int>v(n);
      for(int i = 0 ; i<n; i++)

      {
        cin>>v[i];
      }

      while (v.size()>0 && v[0] == 0)
      {
        v.erase(v.begin());
      }

     while (v.size()>0 && v[v.size()-1] == 0)
     {
        /* code */
        v.pop_back();
     }
        int count = 0 ; 

      for(int i =  0 ; i<v.size(); i++)
      {
        if(v[i] == 0)
        count++;
      }
      

        if(v.size()== 0)
        cout<<0<<endl;
        else if(count == 0)cout<<1<<endl;
        else cout<<2<<endl;
}
int main(){
    fast;

  	int test = 1;
	  cin>>test;
	  while(test--)
  	{
      solve();  
    }
	return 0;
}