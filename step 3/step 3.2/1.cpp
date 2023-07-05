#include <bits/stdc++.h>
using namespace std;

void sol1(int arr[], int n, int target){
    string ans = "NO";

    for (int i = 0; i < n; i++)
    {
        
        for (int j = i+1; j < n; j++)
        {
            int sum=0;
            sum=arr[i]+arr[j];
            if (sum==target)
            {
                ans="YES";
                cout<<ans;
                break;
            }
            
        }
        
    }

    if (ans == "NO")
    {
        cout<<ans;
    }
    
    
}


void sol2(int arr[], int n , int target){
     string ans = "NO";
    unordered_map<int ,int>mp;
    
    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];

        if (mp.find(rem) != mp.end())
        {
            ans="YES";
            cout<<ans;
            break;
        }
        
        mp.insert({ i , arr[i]});
    }

    if (ans == "NO")
    {
        cout<<ans;
    }
    
}

int main()
 {
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sol1(arr,n,1);
    sol2(arr,n,13);
     return 0;
 }