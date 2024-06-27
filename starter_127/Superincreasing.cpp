#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> v(n);
        int c_sum = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (i + 1 == k) {
                v[i] = x;
            } else {
                v[i] = c_sum + 1;
            }
            c_sum += v[i];

            // Check superincreasing condition
            if (i > 0 && v[i] <= c_sum - v[i - 1]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
