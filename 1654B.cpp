#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;

    cin>>s;
    
    map<char,int>m;
    for(int i = 0 ; i<s.size() ; i++) m[s[i]]++;

    int i = 0;
    for( ; i<s.size() ; i++)
    {
        if(m[s[i]] <=1)
        {
            break;
        }
       m[s[i]]--;
    }
    for(; i<s.size() ; i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    
   
}
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
  solve();

    }
    
}