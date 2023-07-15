#include <bits/stdc++.h>
using namespace std;



 vector<vector<int>>zeroMatrix_sol1(vector<vector<int>>matrix, int n ){

vector<vector<int>>rotated(n,vector<int>(n,0));


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           
           rotated[j][n-i-1]=matrix[i][j];         
        }
        
    }
    
    return rotated;
    

}

 vector<vector<int>>zeroMatrix_sol2(vector<vector<int>>matrix, int n ){



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
           
            swap(matrix[i][j] ,  matrix[j][i]);            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    
    
    return matrix;
    

}
int main()
 {
      vector<vector<int>> matrix ={ {1,2,3},{4,5,6},{7,8,9} };
    int n=matrix.size();
 
    vector<vector<int>>ans = zeroMatrix_sol1(matrix,n);
    // vector<vector<int>>ans = zeroMatrix_sol2(matrix,n);
      
    for (auto i : ans)
    {
        for (auto j : i)    
        {
            cout<<j<<" "; 
        }
        cout<<endl;
        
    }
     return 0;
 }