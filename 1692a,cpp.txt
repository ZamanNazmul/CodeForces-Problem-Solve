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
    char ch[9][9];

    for(int i = 1 ; i<=8; i++)
    {
        for(int j = 1 ; j<=8 ; j++)
        cin>>ch[i][j];
    }


    for(int i = 2 ; i<= 7 ; i++)
    {
        for(int j = 2 ; j<= 7 ; j++)

        if(ch[i][j] == '#' && ch[i-1][j-1] == '#' && ch[i-1][j+1] == '#' && ch[i+1][j-1] == '#' && ch[i+1][j+1] == '#')
        cout<<i<<" "<<j<<endl;
    }
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