#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n){

    vector<int>positive;
    vector<int>negetive;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negetive.push_back(arr[i]);
        }        
    }

    for (int i = 0; i < n/2; i++)
    {
        arr[i * 2]=positive[i];
        arr[i * 2 + 1]= negetive[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    

}

void sol2(int arr[] , int n){


 vector<int>ans(n,0);
 int positive=0;
 int negetive=1;

 for (int i = 0; i < n; i++)
 {
    if (arr[i] < 0)
    {
        ans[negetive] = arr[i];
        negetive += 2;
    }
    else
    {
       ans[positive] = arr[i];
        positive += 2;
    }
 }

for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

void sol3(int arr[] ,  int n){


    vector<int>pos;
    vector<int>neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }       
    }

    if (pos.size()<neg.size())
    {
         for (int i = 0; i < pos.size(); i++)
        {
            arr[i*2]= pos[i];
            arr[i*2+1]= neg[i];
        }

        int index = pos.size()*2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index]=neg[i];
            index++;
        }
    }else
    {

        for (int i = 0; i < neg.size(); i++)
        {
            arr[i*2]= pos[i];
            arr[i*2+1]= neg[i];
        }

        int index = neg.size()*2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index]=pos[i];
            index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
            cout<<arr[i]<<" ";
    }
    
    
    
    


}


int main()
 {
    int  arr[]= {1,2,-4,-5,3,4};

    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    // sol2(arr,n);
    sol3(arr,n);
     return 0;
 }