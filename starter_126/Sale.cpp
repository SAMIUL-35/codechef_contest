#include <bits/stdc++.h>

using namespace std;

void max_sales(int n, vector<int> v) {
    
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    }

    long long max_sale = 0;
   
    for (int i = 1; i <= N; ++i) {
        
        long long p_sales = prefix_sum[i - 1] + v[i - 1] * 2;
    
        max_sale = max(max_sale, p_sales);
    }

    cout << max_sale << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        max_sales(n, v);
    }

    return 0;
}
