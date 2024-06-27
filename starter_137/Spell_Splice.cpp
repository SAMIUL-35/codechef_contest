#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

    ll spell( vector<pair<ll, ll>> s) {
    ll max_spell = 0;
    ll n = s.size();
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll V_i = s[i].first;
            ll A_i = s[i].second;
            ll V_j = s[j].first;
            ll A_j = s[j].second;
            ll x = A_i * V_j + V_i * A_j;
            max_spell = max(max_spell, x);
        }
    }
    return max_spell;
}


int main ()

{
op();
  
ll t;
cin>>t;
while (t--)
{
    ll n;
    cin>>n;
   vector<pair<ll, ll>> s(n);
        for (ll i = 0; i < n; i++) {
            cin >> s[i].first >> s[i].second;
        }
        cout<<spell(s)<<endl;
}


    return 0;
}
