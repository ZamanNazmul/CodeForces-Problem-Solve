#include<bits/stdc++.h>
using namespace std;

const int inf = 1000000000;
void solve()
{
    int n,w,h;
    cin>>n>>w>>h;

    vector<int>a(n);
    vector<int>b(n);

    for(int i = 0 ;i<n ; i++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i<n; i++)
    {
        cin>>b[i];
    }

    int mins = -inf ,maxs = inf ;

    for(int i = 0 ; i<n; i++)
    {
        mins = max(mins, (b[i] + h) - (a[i] + w));
        maxs = min(maxs, (b[i] - h) - (a[i] - w));
    }

        if (mins<= maxs) {
        cout << "YES" << '\n';
        } else {
        cout << "NO" << '\n';
        }

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