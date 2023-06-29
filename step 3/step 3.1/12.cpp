#include <bits/stdc++.h>
using namespace std;

int sol1(int arr[], int n, int num){

    int ans=0;

    
    for (int i = 0; i < n; i++)
    {
       ans=ans^arr[i];
    }

    return ans;
}

int main()
 {
    int arr[]={4,1,2,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    int num=6;
    int a=sol1(arr,n,num);
    cout<<a<<" ";
     return 0;
 }
