#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n, int k){

    int temp[k];

    for (int i = 0; i < k; i++)
    {
        temp[i]=arr[i];
    }
   
    for (int i = 0; i < n-k; i++)
    {
        arr[i]=arr[i+k];
    }
 
    for (int i = n-k; i < n; i++)
    {
        arr[i]=temp[i-n+k];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void Reverse(int arr[], int start, int end){
    while (start<=end)  
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    
}
void sol2 (int arr[],int n,int k){

    Reverse(arr,0,n-k-1);
    Reverse(arr,n-k,n-1);
    Reverse(arr,0,n-1);
}
int main()
 {
    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n,2);
    cout<<endl;
    sol2(arr,n,2);

    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

     return 0;
 }