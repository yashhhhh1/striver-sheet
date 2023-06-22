#include <bits/stdc++.h>
using namespace std;
 

void sol1(int i , int n){

    if (i > n)
    {
        return ;
    }
    cout<<i;
    sol1(i+1,n);
    
}

int main()
 {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    sol1(1 , n);
     return 0;
 }