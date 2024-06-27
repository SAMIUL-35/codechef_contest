#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int min_happy = 0, max_happy = 0;
        int happy = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] >= l && v[i] <= r) {
                happy++;
                max_happy = max(max_happy, happy);
            } else {
                happy--;
                min_happy = min(min_happy, happy);
            }
        }
        cout << max_happy << " " << (min_happy) << endl;
    }
    return 0;
}
