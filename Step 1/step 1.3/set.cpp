#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> v;

    for (int i = 1; i <= 10; i++)
    {
       v.insert(i);
    }

    cout<<"present element print ";
    for (auto i : v)
    {
        cout << i << " ";
    }

    int  n=2;
    cout<<endl;

    if(v.find(n)!= v.end()){
        cout<<n<<"  is present in the set"<<endl;
    }

    v.erase(v.begin());
       cout<<"after deleting the first element ";
    for (auto i : v)
    {
        cout << i << " ";
    }


    cout<<"set size is :"<<v.size()<<endl;
  
   
    if(v.empty() == false){
        cout<<"set is not empty"<<endl;
    }else
    {
        cout<<"set is empty"<<endl;
    }

    v.clear();
    cout<<"after all element can remove in the set remening size is:"<<v.size();
    
}