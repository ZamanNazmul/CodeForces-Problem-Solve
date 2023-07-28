#include<bits/stdc++.h>
using namespace std;
inc


void solve()
{
    set<string>s;

    string s1;

    for(auto it = s.begin() ; it != s.end() ; it++)
    {
        cin>>s1;
         s.insert(s1);
    }


    for(auto it = s.begin() ; it != s.end() ; it++)
    {
        if(s1 == 'a') count++;
        if(s1 == 'b') count1++;
    }

    if(count.size()<=2 && count1 <=2) yes;
    else no;
    

   
}
int main()
{
    int n;
    cin>n;

    while (n--)
    {
        /* code */
        solve();
    }
    
}