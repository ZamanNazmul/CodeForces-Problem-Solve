#include <bits/stdc++.h>
using namespace std;
#define fast ios_base :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n)  for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)

#define yes  cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define pi  3.14
#define ll  long long
#define mod 1000000007
#define inf INT_MAX
#define nn  cout<<endl
#define mnn 1000000
 

void solve()
{
    int n, a, b;
    
    cin >> n >> a >> b;
    
    vector<int> vec(n);
    
    lop(i,n) {
        cin >> vec[i];
    }
    
    ll ans = 0;
    int cnt = 0;

    
    lop(i,n) {
        if (vec[i] <= b) {
            cnt++;
        } else {
            cnt = 0;
        }

        if (cnt >= a) {
            ans += cnt - a + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
