#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[], int n){

    vector<int>vp;

    for (int i = 0; i < n; i++)
    {
        bool lead=true;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                lead=false;
                break;
            }
            
        }
        if (lead)
        {
            vp.push_back(arr[i]);
        }
        
        
    }

    for (auto i : vp)
    {
        cout<<i<<" ";
    }
    

    cout<<endl;
    
    
}

void sol2(int arr[0] , int n){
    vector<int>vp;
   

    int max=arr[n-1];
    vp.push_back(max);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max) 
        {
            vp.push_back(arr[i]);
            max=arr[i];
        }
        
    }
    

    for (auto i : vp)
    {
        cout<<i<<" ";
    }
    

}
 
int main()
 {  
    int arr[]={10,22,12,3,0,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);
    sol2(arr,n);
     return 0;
 }