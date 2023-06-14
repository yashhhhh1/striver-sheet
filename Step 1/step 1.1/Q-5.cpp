#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};

    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2];
    cout<<arr[3];
    cout<<arr[4];

    for (int i = 0; i < n; i++){
       cout<<arr[i]<<endl;
    }

    for (auto &&i : arr)
    {
        cout<<i<<endl;
    }

    string name = "yash";

    for (char i = 0; i < name.length(); i++)
    {
        cout<<name[i]<<endl;
    }
    
    
    
 


}