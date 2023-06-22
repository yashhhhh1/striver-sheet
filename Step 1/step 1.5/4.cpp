#include <bits/stdc++.h>
using namespace std;

 void sol1(int n){
    cout<<n;
    if (n==0)
    {
        return ;
    }
    
    sol1(n-1);
    
 } 
int main()
 {
    int n;
    cout<<"enter the number:";
    cin>>n;
    sol1(n);
     return 0;
 }