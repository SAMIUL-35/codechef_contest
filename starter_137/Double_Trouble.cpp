#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main() {
    op();
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> x(n), p(n);
        for (ll i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> p[i];
        }

       
        ll max1 = 0, max2 = 0;
        for (ll i = 0; i < n; i++) {
            if (p[i] > max1) {
                max2 = max1;
                max1 = p[i];
            } else if (p[i] > max2) {
                max2 = p[i];
            }
        }

        
        // sort(x.begin(), x.end());

        
        ll first = 0;
        for (ll i = 0; i < n / 2 - 1; i++) {
            first += x[i + 1] - x[i];
        }

 
        ll second = 0;
        for (ll i = n / 2; i < n - 1; i++) {
            second += x[i + 1] - x[i];
        }

        bool ok = false;
        if (first + second <= max1 || first + second <= max2) {
            cout << "YES" << endl;
            continue; 
        }

       
        if ((first <= max1 && second <= max2) || (first <= max2 && second <= max1)) {
            ok = true;
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
