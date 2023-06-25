#include <bits/stdc++.h>
using namespace std;

bool sol1(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
 
        if (arr[i]<arr[i-1])
        {
            return false;
        }
        
       
    }
    return true;
    
} 
int main()
 {
    int arr[]={3,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);

    bool ans= sol1(arr,n);
    if (ans) cout << "True" << endl;
    else cout << "False" << endl;
  return 0;
 }