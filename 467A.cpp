#include <bits/stdc++.h>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#define pi 3.14 

using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     int a,b;
    //     cin>>a>>b;

    //     if(b-a>=2)
    //     {
    //         count++;
    //     }
    // }

    // cout<<count<<endl;


    int t;
    cin>>t;
    int count = 0;


    int arr[n];
    for(i,n)
    {
        cin>>arr[i];
    }

    int c0= count(arr,arr+n,0);

     if(c0 == n)
      {
        cout<<0<<endl;
      }
      if(c0 == 0)
    {
            cout<<1<<endl;
    }
          if(arr[0] == 0 && arr[n-1] == 0 )
          {
             c0--;
          }
         cout<<c0<<endl;
}