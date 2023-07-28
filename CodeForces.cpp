// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
#include<string.h>
using namespace std; 

#define ll long long 
#define mod 1000000007
#define inf INT_MAX
#define nn cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//    printf(a[0] == mn ? "Bob\n" : "Alice\n");
void solve()
{
    int n;
    cin>>n;
    vector<ll>vec(n);
    set<ll>stt;
    lop(i,n)
    {
            cin>>vec[i];
          stt.insert(vec[i]);
    }
    if(stt.size() ==  1)
    {
         cout<<1<<endl;

    }
    else if(stt.size() > 2)
    {
        cout<<n<<endl;
    }
    else
    cout<<(2+(n-2)/2)<<endl;
   

}
int main()
{
    fast;

    int test;
    cin>>test;
    while(test--)
    {
        solve(); 
    }
}
     
     
     
 