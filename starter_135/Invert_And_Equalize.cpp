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
        int n;
        cin >> n;
        string S;
        cin >> S;

        ll one = 0;
        ll zero = 0;

       
        if (S[0] == '0') {
            zero++;
        } else {
            one++;
        }

       
        for (int j = 1; j < n; j++) {
            if (S[j] != S[j - 1]) {
                if (S[j] == '0') {
                    zero++;
                } else {
                    one++;
                }
            }
        }

        
        cout << min(zero, one) << endl;
    }

    return 0;
}
