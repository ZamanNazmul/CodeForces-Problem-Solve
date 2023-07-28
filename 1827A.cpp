#include<bits/stdc++.h>
using namespace std;
const int MOD = (int) 1000000007;
#define ll long long 
int main()
{
     int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
   vector<int> a(n),b(n);
 
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      for(int i=0;i<n;i++){
         cin>>b[i];
      }
 
      ll ans=1;
 
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
 
      for(int i=0;i<n;i++){
         if(a[i]<=b[i]){
            ans=0;
            break;
         }
      }
 
      if(!ans){
         cout<<0<<endl;
         continue;
      }
 
      ans=1;
      for(int i=0;i<n;i++){
         int low=i,high=n-1;
         int indx;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(a[i]>b[mid]){
               indx=mid;
               low=mid+1;
            }
            else{
               high=mid-1;
            }
         }
         ll Take=indx-i+1;
         ans*=Take;
         ans%=MOD;
      }
 
      cout<<ans<<endl;
 
   }
}