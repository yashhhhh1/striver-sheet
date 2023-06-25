#include <bits/stdc++.h>
using namespace std;

void sol1(int n,int arr[]){

  unordered_map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
      //  mp[arr[i]]=mp[arr[i]]+1;
      mp[arr[i]]++;
    }
    cout<<endl;

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    

}

int main()
 {
    
    int arr[]={1,2,1,2,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(n,arr);
    return 0;
 }