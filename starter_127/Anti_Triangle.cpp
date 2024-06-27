#include <iostream>
#include <vector>

using namespace std;

void generate_branches(int N, int L) {
    vector<int> branches;
    
    // Set first N-1 elements as consecutive integers starting from 1
    for (int i = 1; i <= N - 1; ++i) {
        branches.push_back(i);
    }
    
    // Set the last element greater than the sum of first N-1 elements and L
    branches.push_back((N - 1) + L);
    
    // Output the branches
    for (int i = 0; i < N; ++i) {
        cout << branches[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, L;
        cin >> N >> L;
        generate_branches(N, L);
    }
    
    return 0;
}
