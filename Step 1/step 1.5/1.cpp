#include <bits/stdc++.h>
using namespace std;

 int cnt=0;
void sol1(){

   if (cnt == 5)
   {
    return;
   }
   cout<<cnt<<endl;
   cnt++;
   sol1();
   


    
}

int main()
{
    
    
    sol1();

    return 0;
}