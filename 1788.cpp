#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0 ; i<n; i++)
    {
        cin>>v[i];
    }

    int t2 = count(v.begin(),v.end(),2);
    if(t2 == 0 )
    {
        cout<<1<<endl;
        continue;
    }

    int ans = -1 ,t1 = 0;

    for(int i =0; i<n; i++)
    {
        if(v[i] == 2)
        t1++;
  
    if(2*t1 == t2)
    {
        ans=i;
        break;
    }
    }
    cout<<(ans+1)<<endl;
    }
}