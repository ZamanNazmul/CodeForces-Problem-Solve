#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,r,s,val;
    cin>>n>>s>>r;
    val = s-r;
    cout<<val<<" ";

    int j = 1;
    for(int j = 2; j<=n; j++)
        {
            while(r-val<n-j)
            {
                val--;
            }
            cout<<val<<" ";
            r = r-val;
        }
    cout<<endl;
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