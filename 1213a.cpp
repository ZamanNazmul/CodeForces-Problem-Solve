#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int ans = 0 ,ans1 = 0;
    for(int i = 0 ; i<n; i++)
    {
        cin>>x;
 
        if(x%2 == 0) ans++;
        else ans1++;
    }
 
    cout<<min(ans,ans1)<<endl;
}