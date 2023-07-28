#include <bits/stdc++.h>
using namespace std; 
#include<string.h>
#include <vector>
#include <unordered_map>
#define ll long long 
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)

void sovle() {
    ll n;
    cin >> n;

    vector<vector<ll>> vec(n);
    unordered_map<ll, ll> count;

    lop(i,n) {
        int m;
        cin >> m;

        vec[i].resize(m);
        
        for (int j = 0; j < m; j++) {
            cin >>  vec[i][j];
            count[ vec[i][j]]++;
        }
    }


    vector<int> ans;
    lop(i,n) {
        bool found = false;
        for (int j = 0; j <  vec[i].size(); j++) {
            if (count[ vec[i][j]] == 1) {
                ans.push_back( vec[i][j]);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "-1\n";
            return;
        }

        for (int j = 0; j <  vec[i].size(); j++) {
            count[ vec[i][j]]--;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout <<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        sovle();
    }

    return 0;
}
