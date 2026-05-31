#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,1,2,3,4,4};
    vector<int> b={1,4,6,6,7,7,8};
    int n1=a.size();
    int n2=b.size();
    vector<int> vis(n2,0);
    vector<int>ans;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i])break;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}