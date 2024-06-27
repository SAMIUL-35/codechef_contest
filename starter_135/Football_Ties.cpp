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
  int t;
  cin>>t;
  while (t--)
  {
    int n,m;
    cin>>n>>m;
    int x=n%3;
    int y=m%3;
    if(x==y)
    {
        cout<<x<<endl;
    }
  }
  


    return 0;
}