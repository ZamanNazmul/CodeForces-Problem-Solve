#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;

  vector<int>pref(n,0),suff(n,0);

  set<char>se;

  for(int i = 0 ; i<n; i++)
  {
    se.insert(s[i]);
    pref[i] = se.size();
  }
  se.clear();

  for(int i = n-1 ; i>-1 ; i--)
  {
    se.insert(s[i]);
    suff[i] = se.size();
  }
  int ans = 0;

  for(int i = 0; i<n-1; i++)
  {
    ans  = max(ans,pref[i]+suff[i+1]); 
  }
    cout<<ans<<endl;
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