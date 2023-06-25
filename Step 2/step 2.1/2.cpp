// Bubble Sort
#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[], int n){

    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}
int main()
 {
    int arr[]={7,4,1,8,5,29,63};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);
     return 0;
 }