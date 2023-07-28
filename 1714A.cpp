#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,h,m;
    cin>>n>>h>>m;

    int ans = INT_MAX;

    for(int i = 1; i<=n ; i++)
    {
        int hours,mints;
        cin>>hours>>mints;
        int count = 0 ; 

        int _h = h; 
        int _m = m; 

        while (true)
        {

            /* code */if( _h == hours and _m == mints)
            {
                break;
            }
        
        count++; 
        _m++;
        if(_m == 60)
        {
            _m=0;
            _h++;
            if(_h == 24)
            {
                 _h=0; 
            }
        }
        
    }
    ans = min(ans,count);
    }

    cout<<ans/60<<" "<<ans%60<<endl;


}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        /* code */
    }
    
}