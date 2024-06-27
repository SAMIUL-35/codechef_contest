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


  
  
int score = 0;
int x= n/2;
    if(n%2==0)
         { 
            score += x*(2 * 6)+x*1;
        
        }
        else 
        {
            score += x*(2 * 6)+x*1+1;
        }
    
   cout<< score<<endl;}

    return 0;
}

