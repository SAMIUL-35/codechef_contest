#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main ()

{
op();
   ll t;
    cin >> t;
    
    while (t--) {
        ll n, m;
        cin >> n >> m;
        
        vector<ll> candies(n);
        vector<ll> chocolates(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> candies[i];
        }
        
        for (ll i = 0; i < n; i++) {
            cin >> chocolates[i];
        }
        
        unordered_map<ll, ll> x;
        
   
        for (ll i = 0; i < n; i++) {
            ll remain = candies[i] % m;
            x[remain]++;
        }
        
        ll ans = 0;
        
       
        for (ll i = 0; i < n; i++) {
            ll remain = chocolates[i] % m;
            ll k = (m - remain) % m;
            if (x.find(k) != x.end()) {
                ans += x[k];
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}



    