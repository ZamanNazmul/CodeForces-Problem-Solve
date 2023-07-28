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
     
     
        vector<string>v;
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
     
            v.push_back(s);
    
     
            if(s[i] && s[i+1]=='a' || s[i] && s[i+1]=='b')
                {
                    cout<<"YES"<<endl;
          
                }
                else 
                {
                    cout<<"NO"<<endl;
                }
        }
        
        
     
     
     
 