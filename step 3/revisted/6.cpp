#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n, int k){
    int temp[k];
    int count=0;
    for (int i = n-k; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int i = k; i < n; i++)
    {
        cout<<arr[count]<<" ";
        count++;
    }
    
}

void reverse(int arr[], int start, int end){

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

    
}

void sol2(int arr[], int n, int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";        
    }
    

}

int main()
 {
    int  arr[] = {3,7,8,9,10,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    // sol1(arr,n,k);
    sol2(arr,n,k);
    return 0;
 }