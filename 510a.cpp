// NAZMUL ZAMAN _BSC in IT

#include <bits/stdc++.h>
using namespace std; 
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pi 3.14 
#define endl "\n"
#define ll long long
#define mod 1000000007
#define sortA sort(arr,arr+n);
#define sortS sort(s.begin(),s.end());
 
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))

// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl;
#define mn 1000000
#define ff first
#define ss second
#define gap " "


void solve()
{
    scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i].first);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i].second);
	sort(a, a + n);
	sufMin[n] = INF;
	for (int i = n - 1; i >= 0; i--)
		sufMin[i] = min(sufMin[i + 1], a[i].second);
	int d = 0;
	int p = 0;
	while(k > 0) {
		d += k;
		while(p < n && a[p].first <= d) p++;
		if (p == n) {
			printf("YES\n");
			return;
		}
		k -= sufMin[p];
	}
	printf("NO\n");
}
signed main()
{
    int r;
    cin>>r;
    while (r--)
    {
        /* code */
        solve();
    }
    
}