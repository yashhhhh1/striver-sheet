#include <bits/stdc++.h>
using namespace std;
 
void sol1( int arr[], int n){

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0 )
        {
        v.push_back(arr[i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        arr[i]=v[i];
    }
    for (int i = v.size(); i < n ; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sol2(int arr[], int n){

    int right = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            right=i;
            break;
        }   
    }

    if (right == -1)
    {
        cout<<"not found 0"<<endl;
    }
    else
    {
        for (int  i = right+1; i < n; i++)
        {

            if (arr[i] != 0)
            {
                swap(arr[i], arr[right]);
                right++;
            }
            

        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    

}

int main()
 {
    int  arr[]={0,0,0,1,2,0,0,1,0,4,0,0,0,0,0,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol2(arr,n);
     return 0;
 }