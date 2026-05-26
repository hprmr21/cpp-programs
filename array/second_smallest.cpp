#include <iostream>
#include<vector>
using namespace std;

void secondSmallest(int arr[],int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest=arr[i];

        }
    }
    cout<<"Second smallest is: ";
    cout<<ssmallest;

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    

secondSmallest(arr,n);

    
    return 0;
}