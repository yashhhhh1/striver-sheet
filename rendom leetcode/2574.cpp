#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[], int n){
   
    int leftsum[n];
    int rightsum[n];


    int zero=0,sum=0;

    leftsum[0]=0;
    leftsum[1]=arr[0];

    for (int i = 2; i < n; i++)
    {
        sum=leftsum[i-1]+arr[i-1];
        leftsum[i]=sum;
    }

    sum=0;

    for (int i = n - 1; i >= 1; i--)
    {
        sum += arr[i];
        rightsum[i]=sum;
    }

    for (int i = 1; i < n+1; i++)
    {
        rightsum[i]=rightsum[i];
    }
    

    for (int i = 0; i < n; i++)
    {
      
        cout<<leftsum[i]<<" ";
        
        cout<<rightsum[i]<<" "<<endl;
    }
    
   
    
}


int main()
 {
    int arr[]={10,4,8,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);

     return 0;
 }