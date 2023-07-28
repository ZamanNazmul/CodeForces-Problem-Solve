// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
#include<string.h>
using namespace std; 
#define ll long long 
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
//    printf(a[0] == mn ? "Bob\n" : "Alice\n");
int bitcount(int n){
      int c = 0;
    while (n != 0)
    {
        n = n & (n-1);
        c++;

    }
    return c;
}
  
    
int main()
{
  
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll>v(m+1);
      int count = 0; 
    long long res = 0;

    for(int i = 0; i <= m; i++)
     {
        cin >> v[i];
     }

    int t = 0 ;
    for(int i = 0; i < m; i++)
     {
        res = v[i] ^ v[m];

          if(k >= bitcount(res))
       {
        count++;
       }

     }
    cout<<count<<endl;
    


}