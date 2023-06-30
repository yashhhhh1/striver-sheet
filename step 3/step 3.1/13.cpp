#include <bits/stdc++.h>
using namespace std;


int sol1(int arr[], int n, int k){

   
    int len=0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
           for (int k = i; k <=j; k++)
           {
             sum+=arr[k];
           }
           if (sum==k)
                len= max(len,j-i+1);  
        }   
    }
    return len;
}

int sol2(int arr[], int n, int k){
   
    int len=0;
    
    for (int i = 0; i < n; i++)
    {   int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];

            if (sum==k)
                len= max(len,j-i+1);          
        }  
    }
    return len;
}

int main()
 {
    int arr[]={2,3,5,1,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    int a=sol2(arr,n,sum);
    cout<<a<<" ";
     return 0;
 }

