#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int zero = 0 ;
    int nonzero = 0 ;
    for(int i = 0 ; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i = 0 ; i< n; i++)
    {
        if(v[i] != 0)
        nonzero++;
        else zero++;

    }

    int ans = 0 ;
    if(zero == 0 )
    {
        ans = 0 ;
    }
    else{
        if(nonzero >= zero-1)
        {
            ans = 0 ;
        }
        else{
            int mx =*max_element(v.begin(),v.end());
            
            if(mx == 1)
            {
                ans = 2;
            }
            else{
                ans = 1;
            }
        }

    }
    cout<<ans<<endl;

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