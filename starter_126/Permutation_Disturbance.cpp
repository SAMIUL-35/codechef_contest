#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int operations = 0;
        vector<int> s;
        for (int i = 0; i < n; i++) {
            if (p[i] == i + 1) {
                s.push_back(i + 1);
            }
        }
        int c = s.size();
        
        if (c == 0) {
            cout << "0" << endl; 
        } else {
            cout << n / c << endl;
        }
    }

    return 0;
}
