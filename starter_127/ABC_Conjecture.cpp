#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if a string can be made equal to another string
bool canBeEqual(const string& A, const string& B) {
    // Count occurrences of 'a', 'b', and 'c' in both strings
    vector<int> countA(3), countB(3);
    for (char ch : A) {
        countA[ch - 'a']++;
    }
    for (char ch : B) {
        countB[ch - 'a']++;
    }

    // Compare counts
    for (int i = 0; i < 3; ++i) {
        if (countA[i] != countB[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        string A, B;
        cin >> N >> A >> B; // Input for each test case

        // Check if A can be made equal to B
        if (canBeEqual(A, B)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
