#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the number :";
    // cin>>n;
    // int original=n;
    // int count=0;
    // int rev=0;
    // while (n>0)
    // {
    //     int num=n%10;
    //     rev=rev*10 +num;
    //     n=n/10;
    // }
    // if(original==rev)cout<<"It is a palindrome number";
    // else cout<<"Its not a plaindrome number";



    // int sum=0;
    // while(n>0){
    //     int num=n%10;
    //     sum=sum+(num*num*num);
    //     n=n/10;

    // }
    // if(sum==original)cout<<"Armstrong";
    // else cout<<"Not an Armstrong";
    






//    for (int i=1;i*i<n;i++){.   //prime number and find its factor method-1
//     if(n%i==0){
//         count++;
//         cout<<i<<" ";
//         if((n/i)!=i){
//         count++;
//         cout<<(n/i)<<" ";
//     }

//     }
    
//    }
//    cout<<count;
        // if(count==2)cout<<"Number is prime";
        // else cout<<"Not a prime";




// for(int i=1;i<=n;i++){.    //prime number and finds its factore method-2
//     if(n%i==0){
//         count++;
//     }
// }
// if(count==2)cout<<"Number is prime";
// else cout<<"Not a prime";
    



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