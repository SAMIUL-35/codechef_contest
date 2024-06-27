#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

bool checkIndices(int n, int k, const vector<string>& arr) {
    unordered_set<int> decimalValues;

    for (int j = 1; j < (1 << k); ++j) {
        bool found = false;
        for (int i = 0; i < n; ++i) {
            for (int j2 = i + 1; j2 < n; ++j2) {
                int decimal = stoi(arr[i], nullptr, 2) | stoi(arr[j2], nullptr, 2);
                if (decimal == j) {
                    found = true;
                   break;
                }
                else found=false;break;
            }
            
        }
        if (!found) return false;
        decimalValues.insert(j);
    }

    // Check if all required decimal values are present
    for (int j = 1; j < (1 << k); ++j) {
        if (decimalValues.find(j) == decimalValues.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        if (checkIndices(n, k, arr)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
