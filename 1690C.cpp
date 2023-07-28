#include <bits/stdc++.h>
using namespace std;
#define lop(i,n) for(int i=0;i<t;i++)

int main()
{

    int t;
    cin>>t;
    lop(i,t){
        int value;
        cin >> value;
        if(value != 4){

        for(int i=0;i<value-5;i++)
        cout<<i+4<<" ";
        
        cout<<"2 3 1 " << value - 1 << " "<<nazmul<<endl;
        continue;

        }
        cout<<"2 1 3 4"<<endl;      
        
    }
    return 0;
}