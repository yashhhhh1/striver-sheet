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

void sol2(int arr[], int n ){

    


    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                cnt++;
            }
            
        }
    
            if (cnt > (n/2))
            {
                cout<<arr[i];
                break;
            }
                
    }

    


}


void sol3(int arr[], int n){

    int cnt=0;
    int element=0;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt++;
            element = arr[i];
        }else if(element == arr[i]){
            cnt++;
        }else{
            cnt--;
        }

        
    }
    cout<<element;
}

int main()
 {
    int arr[]={2,2,1,1,1,2,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    // sol2(arr,n);
    sol3(arr,n);
     return 0;
 }