#include<iostream>
using namespace std;

int main(){
  
//gcd
int a,b;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;
while(a>0 && b>0){
    if(a>b) a=a%b;
    else b=b%a;

    if(a==0)cout<<b;
    else cout<<a;
}
}