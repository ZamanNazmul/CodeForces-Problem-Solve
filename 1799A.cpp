#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{   
 
    ll t;
    cin>>t;
    while(t--) {
        set < ll > present;
        queue < ll > rec_act;
        map < ll, ll > seq;
        ll n,m,post, remove_time = 0;
        cin>>n>>m;
        for(ll i = n ; i >= 1 ; i--) {
            rec_act.push(i);
            present.insert(i);
            seq[i] = -1;
        }
        for(ll i = 0 ; i < m; i++) {
            cin>>post;
            remove_time++;
            if(!present.count(post)) {
                seq[rec_act.front()] = remove_time;
                present.erase(rec_act.front());
                rec_act.pop();
                
                present.insert(post);
                rec_act.push(post);
            }    
        }
        for(ll i = 1 ; i <= n ; i++) {
            cout<<seq[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;     
 }