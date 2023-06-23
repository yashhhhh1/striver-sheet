#include <bits/stdc++.h>
using namespace std;
 
int sol1(string name){
    int left=0, right=name.length();

    while (left<right)  
    {
        if (!isalnum(name[left]))
        {
           left++;
        }else if(!isalnum(name[right])){
            right--;
        }
        else if (tolower(name[left] != tolower(name[right])))
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }

        
        
        
    }
        return true;
    
} 


int sol2(string name,int i){
    if (i>=name.length()) return true;

    if (name[i] != name[name.length()-i-1]) return false;
    
   return sol2(name,i+1);
    
}  
int main()
 {

   

    string name="ABCDCBA";
    
    bool ans = sol1(name);
    bool ans1 = sol2(name,0);

    if (ans1 == true ||ans == true)
    {
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }

 }