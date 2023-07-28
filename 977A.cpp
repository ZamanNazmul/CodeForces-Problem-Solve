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

    int n,k,i;
    cin>>n>>k;
        for(int i=0;i<k;i++)
        {
            if(n%10==0)
            {
                n=n/10;
            }
            else 
            {
                n--;
            }
        }
            cout<<n<<endl;
}