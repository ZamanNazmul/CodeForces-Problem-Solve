#include<bits/stdc++.h>
using namespace std;
void solve()
{
   string a, b="FBFFBFFBFBFFBFFBFF";

   int n;
   cin>>n>>a;

   int flag = 0 ;

   for(int i = 0 ; i+n-1<17 ; i++)
   {
       int  diff = 0 ; 
        for(int j = 0 ;j<n; j++)
        {
            if(a[j] != b[i+j])
            {
                diff++;
                break;
            }
        }
            if(diff == 0)
            {
                flag =1 ;
                break;
            }

   }

            if(flag == 1)
            {
                cout<<"YES"<<endl;
            }
            else 
            cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }   
}