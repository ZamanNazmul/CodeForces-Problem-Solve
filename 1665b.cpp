// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
using namespace std; 
#define gap " "
#define endl "\n"
#define long long int  int 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void solve(){

    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for(int  i = 0 ; i<n; i++)
    {
        cin>>v[i],m[v[i]]++;
    }

    int mx_fre = 0;

    for(auto &it : m)
    {
        mx_fre = max(mx_fre,it.second);


    }int ans = 0,int rem ;while(mx_fre<n)
    {
        rem = n-mx_fre;
        int can_add =max_fre;
        ans++;
    }


// int ans = 0;
//         int rem;
//         while(max_fre<n)
//         {
//              rem = n-max_fre;
//             int can_add = max_fre;
//             ans++;
//             ans+=min(can_add,rem);
//             max_fre+=min(can_add,rem);

//         }

//         cout<<ans<<endl;




}
int main(){
  	int test;
	  cin>>test;
	  while(test--)
  	{
      solve();  
    }
	return 0;
}