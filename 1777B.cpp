#include<bits/stdc++.h>
using namespace std;
#define m 1000000007

long long factorial(long long n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    long long ans = 1;

    for(int i=1;i<=n;i++)
    {
        ans=(ans*i) % m;

    }
    return ans;

}
int main()
{

        int t;
        cin>>t;
        while(t--)
        {
            long long  n;
            cin>>n;
            
        long long  ans = (n*(n-1) %m)*factorial(n)%m;
        cout<<ans<<endl;

        }

}




