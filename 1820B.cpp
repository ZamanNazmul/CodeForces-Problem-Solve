#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
  int t;cin>>t;
  while ( t--)
  {
    string s; cin>>s; int len=0;int n=s.size();
    for(int i=0;i<n;){
        int cnt=0;
        if(s[i]=='1'){
            while ( i<n && s[i]=='1')
            {
                 cnt++;
                 i++;
            }
            len=max(len,cnt);
        }
        else{
            i++;
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            break;
        }
        cnt++;
    }

    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            break;
        }
        cnt++;
    }

    cnt=min(cnt,n);
    len=max(len,cnt);
    if(len==n){
        cout<<n*n<<endl;
    }
    else
    {   len++;
         int l=(len)/2;
         int b=len-l;
         cout<<l*b<<endl;
    }
    

  }
}