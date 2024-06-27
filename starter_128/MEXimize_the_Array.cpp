#include <bits/stdc++.h>



using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       int v[n];
        int cnt =0;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v,v+n);
        for(int i=0; i<n; i++){
            if(v[i] > i){
                cnt += v[i]-i;
            }else if(v[i] < i){
                cnt += i-v[i];
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
