#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl cout << '\n';

int main ()

{
op();
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    // cout<<n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        // cout<<v[i]<<" ";
    }
    
   sort(v.begin(),v.end(),greater<ll>());

long long sum =0;
	    if(n&1){
	        for(ll i=0; i<n; i++){
    	        if(i<=n/2)
    	            sum += v[i];
    	        else
    	            sum -= v[i];
    	    }
	    }else{
	        for(ll i=0; i<n; i++){
    	        if(i<n/2)
    	            sum += v[i];
    	        else
    	            sum -= v[i];
    	    }
	    }
	    cout<<sum<<'\n';



// ll w=y-x;
// cout<<w<<'\n';
  }


    return 0;
}