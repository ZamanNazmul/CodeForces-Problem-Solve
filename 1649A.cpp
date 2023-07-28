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

void solve()
{
        int n;
        cin >> n;

        vector<int>v(n);
        map<int,int>m;

        for(int i = 0 ; i<n; i++)cin>>v[i],m[v[i]]++;
    
        // if(m[1] == n)
        // {
        //     cout<<0<<endl;
        // }

        int left = 0,right =0;

        for(int i = 0; i<n; i++)
        {
            if(v[i] == 0)
            {
                left = i-1;
                break;
            }
        }
        for(int i = n-1; i>0 ; i--)
        {
            if(v[i] == 0)
            {
                right = i+1;
                break;
            }
        }

        cout<<right-left<<endl;
}
int main(){
    fast;

  	int test;
	  cin>>test;
	  while(test--)
  	{
      solve();  
    }
	return 0;

}