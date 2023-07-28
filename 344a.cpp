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
    int n;
    cin>>n;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}