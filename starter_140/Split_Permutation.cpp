#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main ()

{
op();
  ll t;
    cin >> t;
    
    while (t--)
    {
        ll n;
        cin >> n;
        
        vector<ll> permutation(n);
        for (ll i = 0; i < n; i++) {
            permutation[i] = i + 1;
        }
        
       
        for (ll i = 0; i < n; i++) {
            cout << permutation[i];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    

    return 0;
}