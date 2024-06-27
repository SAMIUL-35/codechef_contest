#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> A(n);
    for (ll i = 0; i < n; i++) {
        cin >> A[i];
    }
    

    vector<vector<ll>> t(n + 1); 
    vector<ll> d(n + 1, 0);
    
    for (ll i = 1; i < n; i++) {
        ll u, v;
        cin >> u >> v;
        t[u].push_back(v);
        t[v].push_back(u);
        d[u]++;
        d[v]++;
    }
    
   
    vector<ll> ans;
    for (int i = 1; i <= n; i++) {
        if (d[i] % 2 == 1) {
            ans.push_back(i);
        }
    }
    
    
    cout << ans.size() << endl;
    for (int v : ans) {
        cout << v << " ";
    }
    cout << endl;
}


int main ()

{
op();
  
ll t;
cin>>t;
while (t--)
{
   solve();
}


    return 0;
}