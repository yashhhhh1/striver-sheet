#include <bits/stdc++.h>
using namespace std;

void sol1(int n,int arr[]){

  map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
      //  mp[arr[i]]=mp[arr[i]]+1;
      mp[arr[i]]++;
    }

    int maxFreq=0,minfreq=n;
    int maxEle=0,minEle=0;

    for(auto i:mp){

        int count=i.second;
        int element=i.first;

        if (count>maxFreq)
        {
            maxEle=element;
            maxFreq=count;
        }
        
        if (count<minfreq)
        {
            minEle=element;
            minfreq=count;
        }
        
    }

    cout<<"max element is :"<<maxEle<<endl;
    cout<<"min element is :"<<minEle<<endl;
    
    
    
    

}

int main()
 {
    
    int arr[]={1,1,1,2, 3, 2, 3, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(n,arr);
    return 0;
 }