#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b,c,d;

    cin>>n>>a>>b>>c>>d;

    int x = min(a,n-a+1);
    int y = min(b,n-b+1);

    int l1  = min(x,y);

    x = min(c,n-c+1);
    y = min(d,n-d+1);

    int l2 = min(x,y);

    cout<<abs(l1-l2)<<endl;
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