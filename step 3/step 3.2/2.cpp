#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n){

    int count=1;
    while (count<n)
    {
        for (int i = 0; i < n-count; i++)
        {
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        count++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

void sol2(int arr[], int n){
    int cnt0=0,cnt1=0,cnt2=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1 )
            cnt1++;
        else
            cnt2++;        
    }

    for (int i = 0; i < cnt0; i++)
    {
        arr[i]=0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i]=1;
    }
    for (int i = cnt0 + cnt1; i < n; i++)
    {   
        arr[i]=2;
    }


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


void sol3(int arr[] ,int n ){

    int low=0, mid=0, high=n-1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1){
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

} 

int main()
 {
    int arr[]={2,0,2,1,1,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    // sol2(arr,n);
    sol3(arr,n);
     return 0;
 }