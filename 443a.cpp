#include <bits/stdc++.h>
using namespace std;
#define fast ios_base :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define lop(i,n)  for(int i=0;i<n;i++)
#define lop1(i,n)  for(int i=1;i<=n;i++)
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define ll  long long
#define mod 1000000007
#define inf INT_MAX

void solve()
{
    int x;
    cin >> x;
    int count = 0;
    while(x--){
        int n1, n2;
        cin >> n1 >> n2;
        if(n1 > n2) count++;
    }
    cout << count << endl;
}

int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        solve();
    }
}
