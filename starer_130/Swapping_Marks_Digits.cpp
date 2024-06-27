#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << "Yes" << endl;
        else {
            string s = to_string(a);
            string t = to_string(b);
            string c, d;
            for (int i = s.length() - 1; i >= 0; i--) { 
                c += s[i];
                d += t[i];
            }
            int alice = stoi(c);
            int bob = stoi(d);
            if(alice>b)cout << "Yes" << endl;
           else  if (a>bob)
                cout << "Yes" << endl;
                
               else  if(alice > bob)cout << "Yes" << endl;
                
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
