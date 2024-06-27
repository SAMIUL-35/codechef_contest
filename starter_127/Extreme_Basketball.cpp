#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            if (a - b >= 10) {
                cout << 0 << endl;
            } else {
                int ac = (10 + b) - a;
                int cnt = 0;
                int alice = a;
                while (alice < (10 + b)) {
                    alice += 3; 
                    cnt++;
                }
                cout << cnt << endl;
            }
        } else {
            int ab = (10 + b) - a;
            int cnt = 0;
            int alice = a;
            while (alice < (10 + b)) {
                alice += 3; 
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
