#include<bits/stdc++.h>
#include<string.h>
#include<string>
#define lop(i,N) for(int i=0;i<N;i++)

using namespace std;
void testcase(){
    int n;
    cin>>n;

    if(n%2==0)
        cout<<"0 0 "<<n/2<<'\n';
    else
        cout<<"-1\n";
}

int main()
{
//    fast;

    int t;
    cin>>t;
    while(t--)
        testcase();
    return 0;
 

}