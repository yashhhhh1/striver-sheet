#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[],int n){
    int temp[n];
    int x=arr[0];

    for (int i = 1; i < n; i++)
    {
        temp[i-1]=arr[i];
    }
    temp[n-1]=x;
   
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
} 

void sol2(int arr[], int n){

    for (int i = 0; i < n-1; i++)
    {
        swap(arr[i],arr[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    
}

int main()
 {
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    sol2(arr,n);


     return 0;
 }