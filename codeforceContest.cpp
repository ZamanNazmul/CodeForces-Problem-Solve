#include <bits/stdc++.h> 
using namespace std; 
#define int  long long int  
  int maxSubArray(vector<int>& nums) { 
        int n = nums.size(), ans = INT_MIN; 
        for(int i = 0; i < n; i++)  
            for(int j = i, curSum = 0; j < n ; j++)  
                curSum += nums[j], 
                ans = max(ans, curSum);         
        return ans; 
    } 
bool isPrime(int  k,int  n,vector<int> a) 
{ 
    vector<int> v(k,0); 
    for(int  i=0;i<n;i++) 
    { 
       v[a[i]%k]++;  
    } 
    for(int  i=0;i<k;i++) 
    { 
        if(v[i]<=1) 
        return true; 
    } 
    return false; 
} 
signed main() { 
    int  t; 
    cin>>t; 
    while(t--) 
    { 
        int  n; 
int  m=0; 
int c; 
int l,r; 
        cin>>n>>c; 
        l=0; 
        int sum=0; 
        vector<int> a(n); 
        for(int i=0;i<n;i++) 
        { 
            cin>>r; 
            a[i]=r; 
            l+=r*r; 
            sum+=r; 
        } 
         
        c-=l; 
        c=c/4; 
        c=c/n; 
        sum/=2*n; 
        int temp=sqrtl(sum*sum+c); 
        temp-=sum; 
      //  temp=temp/(2*n); 
        cout<<temp; 
      cout<<endl; 
    } 
  return 0; 
}
