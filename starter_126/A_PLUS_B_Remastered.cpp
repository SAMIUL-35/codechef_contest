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
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
       cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(), b.end(), greater<int>());

int equal=a[0]+b[0];
bool ok=true;
    for (int i = 0; i < n; i++)
    {
        if(equal!=a[i]+b[i])
        {
ok=false;
        }
        
    }
   
   if(ok)
   {
for (int i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<b[i]<<" ";
    }
    cout<<endl;
   }
   else cout<<"-1"<<endl;
  }
  


    return 0;
}