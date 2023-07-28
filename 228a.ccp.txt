 #include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define pb push_back
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define mem(b,a) memset(a,b,sizeof(a))
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))
// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl
#define mn 1000000
#define ff first
#define ss second
#define gap " "
 
int main()
{
    fast

    int n;
    cin>>n;
 
    for(int i=1;i<n;i++)
    {
        if(i%2 != 0)cout<<" I hate that ";
        else cout<<"I love that";
    }

    if(n%2 != 0)
    cout<<" I hate it "<<endl;
    else cout<<" I love it "<<endl;


    return 0;
}
   
