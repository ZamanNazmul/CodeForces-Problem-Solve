#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]<i and (i==n or a[i+1]>i)){
                ans++;
            }
        }
        if(a[1]!=0){
            ans++;
        }
 
 
        cout<<ans<<endl;
    }
    return 0;
}