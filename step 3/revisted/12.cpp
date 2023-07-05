#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n)
{
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }

    cout<<ans;
}


void sol2(int arr[], int n){
    map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto &&i : mp)
    {
        if (i.second == 1)
        {
            cout<<i.first<<endl;
        }
        
    }
    
    
}

void sol3(int arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
        int num=arr[i];
        int cnt=0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                cnt++;
            }
            
        }
        if (cnt == 1)
        {
            cout<<arr[i];
            break;
        }
        
        
    }
    
}
int main()
 {
    int arr[] = {1,1,2,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    // sol2(arr,n);
    sol3(arr,n);

     return 0;
 }