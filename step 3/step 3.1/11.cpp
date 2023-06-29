#include <bits/stdc++.h>
using namespace std;

int sol1(int arr[], int n, int num){

    int ans=0;
    int maxi=0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            ans++;
        }else
         {
            ans=0;
         }
         
        maxi=max(maxi,ans);
    }

    return maxi;
}

int main()
 {
    int arr[]={1, 0, 1,1,1, 1, 0, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int num=6;
    int a=sol1(arr,n,num);
    cout<<a<<" ";
     return 0;
 }

