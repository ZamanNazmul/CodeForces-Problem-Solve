#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
#define lop(i,n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    int te;
    cin >> te;
    while (te--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1= "";
        lop(i,n)
        {
            s1 += s[i];
            for(int k = i + 1; k < n; k++)
            {
                if(s[k] == s[i]){ i = k; break;}
            }
        }
        cout << s1 << endl;
    }
    return 0;
}