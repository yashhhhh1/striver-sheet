#include <bits/stdc++.h>
using namespace std;

void sol1(int n){
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
        
    }
    
}

void sol2(int n){
    for (int i =1; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
            if (i != n/i)
            {
                cout<<n/i<<" ";
            }
            
        }
        cout<<"\n";
    }
    
}
int main()
 {
    int n=36;

    // sol1(n);
    sol2(n);
     return 0;
 }