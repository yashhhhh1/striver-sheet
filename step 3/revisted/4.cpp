#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n){

    map<int,int>mp;
    
    
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto &&i : mp)
    {
        cout<<i.first<<" ";
    }
}

void sol2(int arr[], int n){
    int i=0; int j=1;

    while (i<n && j<n)
    {
       if (arr[i] != arr[j])
        {
            i++;
            arr[i]=arr[j];

        }   
        j++;
    }

    for (int k = 0; k < i+1 ; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    
}

int main()
 {
    int arr[]={1,1,2,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    sol2(arr,n);
     return 0;
 }