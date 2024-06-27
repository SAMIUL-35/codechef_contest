#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
bool permutation(ll n,  vector<ll> a) {
    unordered_set<ll> values;
    for (ll num : a) {
        if (num <= n && values.find(num) == values.end()) {
            values.insert(num);
        } else {
            bool found = false;
            for (ll j = 1; j <= n; j++) {
                if (values.find(j) == values.end() && j >= num) {
                    values.insert(j);
                    found = true;
                    break;
                }
            }
            if (!found) return false;
        }
    }
    return true;
}

int main ()

{
op();
  
ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (permutation(n, v)) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}

