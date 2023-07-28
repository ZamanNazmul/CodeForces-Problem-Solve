#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;

    int ans= 0;

    string s;
    cin>>s;

    for(int i = 0 ; i<n; i++)
    {
        if(s[i] == 'Q')
        ans--;
        else ans++;
        ans= min(ans,0);
    }
    if(ans<0)
    cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    /* code */
    solve();
   }
   return 0;
}