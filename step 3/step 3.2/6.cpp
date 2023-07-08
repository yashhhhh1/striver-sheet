#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[] , int n ){

    int buy=0;
    int sell=0;
    int max_sell=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        buy=arr[i];

        for (int j = i; j < n; j++)
        {
           sell=arr[j]-buy;
           max_sell=max(max_sell,sell);
           
        }
    }
    
    cout<<max_sell;
} 

void sol2(int arr[] , int n ){

    int price_buy= INT_MAX;
    int profit=0;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] < price_buy)
        // {
        //     price_buy=arr[i];
        // }

        price_buy=min(price_buy,arr[i]);

        // else if (arr[i] - price_buy  > profit)
        // {
        //     profit= arr[i] - price_buy; 
        // }
        
        profit=max(profit , arr[i] - price_buy);
        
    }

    cout<<profit;
    
} 



int main()
 {
    int arr[]= {7,1,5,3,6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr, n);
    sol2(arr, n);
     return 0;
 }