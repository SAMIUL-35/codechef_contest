#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt = 0;
       
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum >= k) {
                cnt++;
                sum = 0;
            }
        }
       
        cout << cnt << endl;
    }

    return 0;
}
