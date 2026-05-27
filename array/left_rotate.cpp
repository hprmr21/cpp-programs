#include <iostream>
#include<vector>
using namespace std;

void reverseArrayLeft(int arr[],int start,int end){
        if (start>end) return;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    // vector<int>temp;      //brute force solution
    // for(int i=0;i<k;i++){
    //     temp[i]=arr[i];
    // }
    // for(int i=k;i<n;i++ ){
    //     arr[i-k]=arr[i];
    // }
    // int j=0;
    // for(int i=n-k;i<n;i++){
    //         arr[i]=temp[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }



reverseArrayLeft(arr, 0,k-1);   //optimal solution
reverseArrayLeft(arr,k,n-1);
reverseArrayLeft(arr,0,n-1);
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
    
    return 0;
}