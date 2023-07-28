#include <bits/stdc++.h>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#define pi 3.14 

using namespace std; 
int main(){

    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        // int arr[n];
        if(s[i]=='7' || s[i]=='4')
        {
            count=count+1;
        }
    }

    if(count==4 || count == 7)
    {
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;

    return 0;
}