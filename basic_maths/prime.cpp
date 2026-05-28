#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    int count=0;
    
    

   for (int i=1;i*i<n;i++){  //prime number and find its factor method-1 (optimal solution) 
    if(n%i==0){
        count++;
        cout<<i<<" ";
        if((n/i)!=i){
        count++;
        cout<<(n/i)<<" ";
    }

    }
    
   }
   cout<<count;
    if(count==2)cout<<"Number is prime";
    else cout<<"Not a prime";




for(int i=1;i<=n;i++){   //prime number and finds its factore method-2
    if(n%i==0){
        count++;
    }
}
if(count==2)cout<<"Number is prime";
else cout<<"Not a prime";
    




}