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

    int t;
    cin>>t;

    while (t--)
    {
        /* code */

        int n,z;
        cin>>n>>z;

        int arr[n];
        int arr2[n];

        int m = 0; 

        for(int i = 0; i<n ;i++)
        {
              cin>>arr[i];
             if(arr[i]>m)
                 {
                    m=arr[i];
                }
            int p = arr[i] |z;

            arr2[i]= p;
        }

            int max = m;

        for(int i = 0 ; i<n ; i++)
        {
            if(arr2[i] >max)
            {
                max = arr2[i];
            }
        }
        cout<<max<<endl;

    }
     
}