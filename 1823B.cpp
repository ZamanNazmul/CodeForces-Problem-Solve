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

        string s;
        cin>>s;
        int c = 1 ,mx =1;
        for(int i = 1 ; i<n; i++)
        {
            if(s[i] == s[i - 1])
            {
                c++;
            }
            else 
            {
                mx = max(mx ,c);
                c = 1 ;
            }
        }
        mx = max(mx,c);
        cout<<mx+1<<endl;
    

    }
}

