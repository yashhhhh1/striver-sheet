#include <bits/stdc++.h>
using namespace std;

int sol1(int arr[], int n, int num){


    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
 {
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int num=6;
    int a=sol1(arr,n,num);
    cout<<a<<" ";
     return 0;
 }