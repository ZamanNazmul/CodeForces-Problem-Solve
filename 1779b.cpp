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

    if(n == 3)
    {
        cout<<"NO"<<endl;
        continue; 
    }
    cout<<"Yes"<<endl;


    if(n % 2 == 0)
    {
        for(int i = 0 ; i<n/2 ; i++)
        {
            cout<<1<<" "<<-1<<" ";
        }
        cout<<endl;
    }
    else 
    {
        int temp = n/2;
        for(int i = 0 ;i<n/2; i++)
        {
            cout<<temp-1<<" "<<-temp<<" ";
        }
        cout<<temp-1<<endl;
    }
    }
}