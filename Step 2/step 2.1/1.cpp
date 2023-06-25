// Selection Sort Algorithm

#include <bits/stdc++.h>
using namespace std;
void selection(int arr[],int n){

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j]<arr[i])
                {
                    swap(arr[j],arr[i]);
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
} 

int main()
 {

    int arr[]={1,5,8,9,7,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
     return 0;
 }