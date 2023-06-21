// Reverse a number in C.

// Problem Statement: Given a number N reverse the number and print it.


#include<iostream>
using namespace std;
 void sol1(int N){
   
    int digit,reverse=0;

    while (N !=0)
    {
       digit=N%10;
       reverse= reverse*10+digit;
        N= N/10;

    }

    cout<<reverse<<endl;
 }


int main()
 {
    int n=12345;

    sol1(n);
    
    return 0;
 }