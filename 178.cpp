#include<bits/stdc++.h>
using namespace std;
int mian()
{
   int t;
   cin>>t;
   while(t--)
   {
      long long n,m;
      cin>>n>>m;

      long long ans = (m*(m-1))/2;

      ans += m*((n*(n+1))/2);

    cout<<ans<<endl;
   }
}
