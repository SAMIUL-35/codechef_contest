#include <bits/stdc++.h>

using namespace std;



int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
       int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
    }
    cout << ans << endl;
}
  
  


    return 0;
}