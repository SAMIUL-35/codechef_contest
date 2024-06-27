#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl cout << '\n';
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define PI 2.0 * acos(0.0)
#define Dpos(n) fixed << setprecision(n)
#define lpi(j) for(int i=0; i<n; i++) cin>>j[i]
#define lpo(j) for(int i=0; i<n; i++) cout<<j[i]<<" ";
#define sort(j) for(j.begin(),j.end()) ;
#define sortg(j) for(j.begin(),j.end(),greater<int>()) ;

typedef long long ll;
typedef vector<ll> vl;
const ll N = 1e5 + 1;
const ll MOD = 1e9 + 7;

void sami()
{
    ll n;
    cin >> n;
    vl a(n);
    lpi(a);
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
           odd++; 
        }
    }
    if(odd>=1)even=even+1;
    ll ans=0;
   for (ll i = 0; i < even; i++)
   {
    ans+=n-i;
   }
   cout<<ans<<'\n';

    
}

int main()
{
    op()
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        sami();
    }
}
