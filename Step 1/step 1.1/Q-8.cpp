#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int mul(int &a,int &b){
    return a*b;
}

void swap(int a,int b){
 int z=a;
 a=b;
 b=z;
}

int main()
{

int a,b;
cin>>a>>b;

cout<<sum(a,b)<<endl;
cout<<mul(a,b)<<endl;
swap(a,b);
cout<<a<<endl<<b<<endl;

}