#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int ans  = n;
    int l = 0,r = n-1;
    while(l<r and   s[l] != s[r])
    {
        l++,r--;
        ans-=2;
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