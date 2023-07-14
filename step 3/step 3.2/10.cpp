#include <bits/stdc++.h>
using namespace std;
 
 void sol1(int arr[] , int n){

    sort(arr,arr+n);

   
    int ans = 1;
    int prev = arr[0];
    int cur = 1;


    for (int i = 1; i < n; i++)
    {
        if (arr[i] == prev+1)
        {
            cur++;
        }else if (prev != arr[i])
        {
            cur=1;
        }
        
        prev=arr[i];
        ans=max(ans,cur);
        
    }
    cout<<ans;
 }


void sol2(int arr[], int n){
    set<int>hasSet;

    for (int i = 0; i < n; i++)
    {
        hasSet.insert(arr[i]);
    }

            int longStreak=0;
    for (int i = 0; i < n; i++)
    {
        if (!hasSet.count(arr[i]-1))
        {
            int currentNum= arr[i];
            int currentStreak=1;

            while (hasSet.count(currentNum + 1))
            {
                currentNum += 1;
                longStreak += 1;
            }

            longStreak = max(currentStreak,longStreak);
            
        }
        
    }


    cout<<longStreak;
    
    
}

int main()
 {  
    int arr[]={3,8,5,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    sol2(arr,n);
     return 0;
 }  