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
  cin>>t;
  while (t--)
  {
    ll N, X, Y; 
        cin >> N >> X >> Y;

        
        ll a = N / 2;
        ll S = N % 2;
        ll b2 = (a * Y) + (S * X);

       
        ll b1 = N * X;

        
        ll ans = max(b2, b1);

        cout << ans << endl;
    }

    return 0;

  }
  

