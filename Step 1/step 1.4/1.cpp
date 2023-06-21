// Count digits in a number

// Problem Statement: Given an integer N , write program to count number of digits in N.

#include<iostream>
using namespace std;
 void sol1(int n){
    int count=0;
    while (n !=0)
    {
        n/=10;
        
        count++;

    }

    cout<<count<<endl;
 }
 void sol2(int n){

    string x= to_string(n);
    
    cout<<x.length()<<endl;
 }


int main()
 {
    int n=12345;

    sol1(n);
    sol2(n);
    
    return 0;
 }