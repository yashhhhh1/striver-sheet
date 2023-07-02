#include <bits/stdc++.h>
using namespace std;
int sol1(int arr[], int n, int k ){

     int maxLen = 0;

     for (int i = 0; i < n; i++)
     {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
            if (sum==k)
            {
                maxLen=max(maxLen,j-i+1);
            }            
        }
     }
     return maxLen; 
} 
int sol2(int arr[], int n, int k ){

     int maxLen = 0;

     for (int i = 0; i < n; i++)
     { 
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            
            if (sum==k)
            {
                maxLen=max(maxLen,j-i+1);
            }            
        }
     }
     return maxLen; 
} 

int  sol3(int arr[], int n , int k)
{
    map<int, int >mp;
    int sum, maxlen = 0;

    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];

        if (sum==k)
        {
            maxlen=max(maxlen, i + 1);
        }

        int rem = sum-k;

        if (mp.find(rem) != mp.end())
        {
           int len= i - mp[rem];
           maxlen= max(maxlen,len);
        }

        if (mp.find(sum) == mp.end())
        {
            mp[sum]=i;
        } 
    }
    return maxlen;
    
}

int main()
 {
    int arr[]={-1, 1, 1, 1, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    int ans1=sol1(arr,n,k);
    cout<<"ans1 is: "<<ans1<<endl;

    int ans2=sol2(arr,n,k);
    cout<<"ans2 is: "<<ans2<<endl;

    int ans3 = sol3(arr, n, k);
    cout<<"ans3 is: "<<ans3<<endl;
    
     return 0;
 }