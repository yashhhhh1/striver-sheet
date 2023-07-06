#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n){

    unordered_map<int, int>mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int element=0 , freq=0; 

    for (auto &&i : mp)
    {
        if (i.second>freq)
        {
            element=i.first;
            freq=i.second;
        }
    }
    
    if (freq > (n/2) )
    {
        cout<<element<<endl;
    }
    else
    {
        cout<<0<<endl;
        
    }
}


int main()
 {
    int arr[]={2,2,1,1,1,2,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);
     return 0;
 }