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

    // int n;
    // cin>>n;
    // if(2000<=n)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else 
    // cout<<"NO"<<endl;

    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // strng st1,st2;

    // for(int i = 0 ; i<n/2 ; i++)
    // {
    //     st1+=s[i];
    // }
    // for(int i = n/2 ;i<n; i++)
    // {
    //     st2+=s[i];
    // }

    // if(st1 != st2)
    // {
    //     no;
    // }
    // else yes;
    

    int n;
    cin>n;

    vector<int>v(n);

    int maxx = INT_MIN;


    lop(i,n)
    {
        cin>>v[i];

        if(v[i]>maxx)
        {
            maxx=v[i];
        }
    }

    cout<<maxx<<endl;











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