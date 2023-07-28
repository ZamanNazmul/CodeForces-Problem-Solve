

#include <bits/stdc++.h>
using namespace std; 
#include<string.h>
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pi 3.14 
#define ll long long
#define int long long int
#define mod 1000000007
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))
// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl
#define  nl "\n"
#define mn 1000000
#define ff first
#define ss second
#define gap " "
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N = 1e4;

bool square(int n)
{
    int x = sqrt(n);
    double y = sqrt(n);
    return ((double)y - (double)x == 0.00);
}
void solve(){

    int x,y;
    cin>>x>>y;

    if(x == 0 and y == 0) cout<<0<<endl;
    else if(square((x*x)+(y*y)))
    {
        cout<<1<<endl;
    }
    else cout<<2<<endl;
    

}
signed main(){
    fast;

       ll t;
       cin>>t;

       while(t--)
       {
            solve();
       }
        
}