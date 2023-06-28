#include <bits/stdc++.h>
using namespace std;

void sol1 (int arr[], int n){

    set<int>temp;

    for (int i = 0; i < n; i++)
    {
       temp.insert(arr[i]);
    }
    int k=temp.size();
    int j=0;

    for(auto x:temp)
    {
        arr[j++]=x;
    }

    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    cout<<temp.size()<<endl;
    

} 

void sol2(int arr[],int n){

    int i=0;

 for (int j = 1; j < n; j++)
 {
    if (arr[i]!=arr[j])
    {
        i++;
        arr[i]=arr[j];
    }
    
 }
 
    for (int k = 0; k < i+1; k++)
    {
        cout<<arr[k]<<" ";
        
    }
    
 
    
}

int main()
 {
    int arr[]={1,1,2,2,3,3};
    int n= sizeof(arr)/sizeof(arr[0]);

    sol1(arr,n);
    sol2(arr,n);
     return 0;
 }