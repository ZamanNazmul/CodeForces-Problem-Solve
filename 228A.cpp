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
    int arr[4];
    int count=0;

        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+4);
       for(int i=0;i<3;i++)
        {
            if(arr[i] == arr[i+1])
            {
                count++;
            }
        }
    
    cout<<count<<endl;

    return 0;
}
   
