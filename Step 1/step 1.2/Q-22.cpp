#include <bits/stdc++.h>
using namespace std;

int main(){
    int row=5;
   for (int i = 0; i < 2*row-1; i++)
   {
        for (int j = 0; j < 2*row-1; j++)
        {
          int top=i;
          int bottem=j;
          int right=(2*row-2)-j;
          int left=(2*row-2)-i;

          cout<<(row - min(min(top,bottem),min(left,right)))<<" ";

        }
            cout<<endl;
        
   }
   
}