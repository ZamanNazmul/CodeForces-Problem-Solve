#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
     long long n,c;
    cin>>n>>c;

    vector<long long>v(n);

    long long  sum = 0;


    for(long long i = 0; i<n; i++)
    {
          cin>>v[i];
        v[i]=v[i]+i+1;
    }

    sort(v.begin(),v.end());



    for(int i = 0 ; i<n; i++)
    {
        sum+=v[i];

        if(sum>c)
        {
            cout<<i<<endl;
        }
    }

    cout<<n<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}