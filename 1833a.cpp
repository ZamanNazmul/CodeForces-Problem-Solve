#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    set<string>st;

    for(int i = 0 ;i<n -1; i++)
    {
        string temp;

        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        st.insert(temp);
    }
    
    cout<<st.size()<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
