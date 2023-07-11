#include <bits/stdc++.h>
using namespace std;

 
vector<int> sol1(vector<int>arr, int n){


    int idx1;

    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] < arr[i+1] )
        {
            idx1=i;
            break;
        }
        
    }
    if(idx1 == 0){
        reverse(arr.begin(),arr.end());
    }else
    {
    int idx2=0;

    for (int i = n; i >= 0; i--)
    {
        if (arr[idx1] < arr[i])
        {
           idx2 = i;
            break;
        }
        
    }
    

    swap(arr[idx1],arr[idx2]);

    reverse(arr.begin()+idx1+1 , arr.end());
  }

  return arr;
   
    
}

int main()
 {
    vector<int>arr={1,2,3};
    int n = arr.size()-1;
    vector<int> ans=sol1(arr,n);
   
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    
    
     return 0;
 }