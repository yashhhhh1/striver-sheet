#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    for (int i = 0; i <n; i++){
       cout<<arr[i]<<endl;
    }

    for (int i : arr)
    {
        cout<<i<<endl;
    }

    string name = "yash";

    for (char i = 0; i < name.length(); i++)
    {
        cout<<name[i]<<endl;
    }
    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
 


}