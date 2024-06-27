#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll A, B, K;
        cin >> A >> B >> K;
        ll ans = 0;
        while (A < B) {
            if (B % K == 0) {
                ans += (B - A) / K;
                break;
            } else {
                ll diff = B % K;
                B -= diff;
                ans += diff;
                ans += (B - A) / K;
            }
           
            if (B < A) {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
