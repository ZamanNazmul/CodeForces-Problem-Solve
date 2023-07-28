#include <bits/stdc++.h>
using namespace std;
#define fast ios_base :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n)  for(int i=0;i<n;i++)
#define lop1(i,n)  for(int i=1;i<=k;i++)
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define ll  long long
#define mod 1000000007
#define infinite LLONG_MAX

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<vector<ll>> gaps(n + 1);
        vector<ll> Pindx(n + 1, 0);
        vector<ll> arr(n + 1, 0);

        ll i = 1;
        while (i <= n) {
            Pindx[i] = 0;
            gaps[i] = vector<ll>();
            i++;
        }

        i = 1;
        while (i <= n) {
            cin >> arr[i];
            i++;
        }

        i = 1;
        while (i <= n) {
            gaps[arr[i]].push_back(i - Pindx[arr[i]] - 1);
            Pindx[arr[i]] = i;
            i++;
        }

        ll ans = infinite;
      lop1(i,n) {
            gaps[i].push_back(n - Pindx[i]);
            sort(gaps[i].rbegin(), gaps[i].rend());
            ll res = gaps[i][0] / 2;

            if (gaps[i].size() >= 2) {
                res = max(res, gaps[i][1]);
            }

           ans = min(ans, res);
        }

        cout << ans << endl;
    }

    return 0;
}
