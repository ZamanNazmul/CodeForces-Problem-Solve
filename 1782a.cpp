#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g;

        int ans = h;

        ans+=min({g+b+abs(a-f), d-g+d-b+abs(a-f), w-f+w-a+abs(g-b), f+a+abs(g-b)});
        cout<<ans<<endl;
    }
}