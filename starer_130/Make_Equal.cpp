#include <bits/stdc++.h>

using namespace std;

int main ()

{
   int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        int mo = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            mo = min(mo, s[i]);
        }
       
        if(s[0]==mo &&s[n-1]==mo)
         {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}