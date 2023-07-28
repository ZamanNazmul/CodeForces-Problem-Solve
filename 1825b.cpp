#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;             cin>>n>>m;
 
      if(n>m)swap(n,m);
 
      vector<ll> a(n*m);
      for(int i=0;i<n*m;i++){
         cin>>a[i];
      }
 
      sort(a.begin(),a.end());
 
 
      ll mn0=a[0];
      ll mn1=a[1];
      ll mx0=a[(n*m)-1];
      ll mx1=a[(n*m)-2];
 
      ll ans1=0;
      ans1=((n*m)-n)*(mx0-mn0);
      for(int i=1;i<=(n-1);i++){
         ans1+=(mx1-mn0);
      }
 
      ll ans2=0;
      ans2=((n*m)-n)*(mx0-mn0);
      for(int i=1,j=1;i<=(n-1);i++){
         ans2+=(mx0-mn1);
      }
 
 
      cout<<max(ans1,ans2)<<endl;
   }
   return 0;
    }
