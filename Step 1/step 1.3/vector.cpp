#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << "\n first element in the vectoe is :" << v.front();
    cout << "\n last element in the vectoe is :" << v.back();
    cout << "\n the vector size is :" << v.size();
    cout << "\n deleting the element form the end:" << v[v.size() - 1]<<endl;
    v.pop_back();
    
    cout<<"remenig the element print"<<endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout<<endl;


    cout<<"insert the 5 at the beginning:"<<endl;
    v.insert(v.begin(),5);
    cout<<"the vector first elemnt is the :"<<v[0]<<endl;

    cout<<"erase the 5 at the beginning:"<<endl;
    v.erase(v.begin());
    cout<<"the vector first elemnt is the :"<<v[0]<<endl;


    if(v.empty()){
        cout<<"vector is not empty"<<endl;
    }else
    {
        cout<<"vector is empty"<<endl;
    }

    v.clear();
    cout<<"after all element can remov e in the vector remening size is:"<<v.size();
    
}