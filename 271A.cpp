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

    int a,b;
    cin>>a;
    cin>>b;
    int sum=0;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
        
    } 
    for(int i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
        sum=sum+i;
        
        }
    }   
    cout<<sum<<endl;
    return 0;
}