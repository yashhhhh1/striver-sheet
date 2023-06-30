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


void sol2(int arr[], int n){

    unordered_map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if (i.second == 1 )
        {
             cout<<i.first<<endl;
        }
        
       
    }
    

}
void sol3(int arr[], int n){

   

    for (int i = 0; i < n; i++)
    {
        int num=arr[i];
        int ctn=0;

        for (int h = 0; h < n; h++)
        {
            if(arr[h]==num) ctn++;
        }

        if (num==1) cout<<num;
        
        
    }

}
void sol4(int arr[], int n){

   
    int maxi=arr[0];
    for (int i = 0; i < n; i++)
    {
               maxi=max(maxi,arr[i]);      
    }
    
    vector<int>hash(maxi+1,0);
    for (int i = 0; i < n; i++)
    {
        
        // hash[arr[i]]=hash[arr[i]]+1;
        hash[arr[i]]++;
        cout<<i<<" "<<hash[arr[i]]<<" "<<endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(hash[arr[i]] == 1){
            cout<<arr[i];
            break;
        }
    }
    

}





int main()
 {
    int arr[]= {4,4,5,1,2,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    int num=6;
    sol4(arr,n);
    // int a=sol1(arr,n,num);
    // cout<<a<<" ";
     return 0;
 }
