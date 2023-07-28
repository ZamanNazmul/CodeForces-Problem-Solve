#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;

    while (s<=e)
    {
        /* code */
        int mid= s+(e-s)/2;
        if(key==arr[mid])
        return mid;
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    cout<<"Enter the value of an array : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of indx " <<i<< " is : ";
        cin>>arr[i];
    }
    cout<<"Enter the value which want to find : ";
    int key;
    cin>>key;

    
    int result = binary_search(arr, n, key);
    (result == -1)
        ? cout << "Element is not present in array" 
        : cout << "Element is present at index " << result;
    return 0;
}
