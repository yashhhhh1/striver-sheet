#include <bits/stdc++.h>
using namespace std;
 
void sol1 (int arr[], int n){
    int ans= -1;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i-1] != i)
        {
            ans=i;
            break;
        }
        
    }
    cout<<"missing number is :"<<ans;
    
} 

void sol2(int arr[], int n){
    
    int hash[n+1]={0};


    for (int i = 0; i < n-1; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[arr[i]] == 0)
        {
            cout<<i<<" ";
            break;
        }
        
    }
}

void sol3(int arr[], int n){
    
    int xor1=0, xor2=0;

    for (int i = 0; i < n-1; i++)
    {
        xor2 = xor2 ^ arr[i];
    }

    xor1=xor1^n;
    int ans= xor1 ^ xor2;
    cout<<ans;
    
}

void sol4(int arr[], int n){
    int N=n+1;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        count+=arr[i];
    }

    int ans=N*(N+1)/2;
    int sol= ans - count;
    cout<<sol;


    

}
int main()
 {
    int arr[]= {1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // sol1(arr, n);
    // sol2(arr, n);
    // sol3(arr, n);
    sol4(arr, n);

     return 0;
 }