#include <bits/stdc++.h>
using namespace std;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef vector<ll> vl;

void sami()
{
    ll n, m;
    cin >> n >> m;
    vl a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
   
    vl v;
    for(int i = 4; i < max(n, m); i++) {
        if(i < n) {
            v.push_back(a[i]);
        }
        if(i < m) {
            v.push_back(b[i]);
        }
    }
    sort(v.rbegin(), v.rend());
    
    ll ans = 0;
    if(n < 4 || m < 4 || (n + m) < 11) {
        cout << "-1" << '\n';
        return;
    } else {
        for(int i = 0; i < 4; i++) {
            ans += a[i] + b[i];
        }
        for(int i = 0; i < 3; i++) {
            ans += v[i];
        }
        cout << ans << '\n';
    }
}

int main()
{
    op();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        sami();
    }
    return 0;
}
