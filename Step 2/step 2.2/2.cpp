#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[], int n){

    if (n==0)
    {
            return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    sol1(arr,n-1); 
}




int main()
 {  
    int arr[]={5,4,3,2,1,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    sol1(arr,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
     return 0;
 }