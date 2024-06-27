#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        for (long long i = 1; i < n - 1; i++) {
            if (v[i] > v[i-1] && v[i] < v[i+1]) {
                continue;
            } else {
                if (v[i-1] == v[i+1]) continue;
                else {
                    v[i] = v[i-1];
                    v[i+1] = v[i-1];
                    break;
                }
            }
        }

        if (is_sorted(v.begin(), v.end())) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
