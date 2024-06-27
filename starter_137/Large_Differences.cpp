#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


ll ans(vector<ll> v, ll n, ll i, ll x, ll s) {
    ll newSum = s;
    if (i > 0) {
        newSum -= abs(v[i] - v[i - 1]);
        newSum += abs(x - v[i - 1]);
    }
    if (i < n - 1) {
        newSum -= abs(v[i] - v[i + 1]);
        newSum += abs(x - v[i + 1]);
    }
    return newSum;
}

int main() {
    op();
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        
    
        ll s = 0;
        for (ll i = 0; i < n - 1; i++) {
            s += abs(v[i] - v[i + 1]);
        }
        
       
        ll maxSum = s;
        
        
        for (ll i = 0; i < n; i++) {
            maxSum = max(maxSum, ans(v, n, i, 1, s));
            maxSum = max(maxSum, ans(v, n, i, k, s));
        }
        
       
        cout << maxSum << "\n";
    }
    return 0;
}
