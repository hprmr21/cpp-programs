#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> a1={1,1,2,3,4,4};
    vector<int> a2={1,4,6,6,7,7,8};
    int n1=a1.size();
    int n2=a2.size();
    // brute force method

    // set<int> st;


    // for(int i=0;i<n1;i++) st.insert(a1[i]);
    
    // for(int i=0;i<n2;i++) st.insert(a2[i]);

    // vector<int> temp;
    // for(auto it:st){
    //     temp.push_back(it);
    // }
    // for(auto it:temp){
    //     cout<<it<<" ";
    // }


    //optimal 
    vector<int> unionArr;
    int i=0;
    int j=0;
    while( i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            if(unionArr.size()==0 ||
               unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
            }
            i++;
        }
        else{
             if(unionArr.size()==0 ||
               unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
            }
            j++;

        }
    }
    while(j<n2){
        if(unionArr.size()==0 ||
               unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
        }
    j++;
    }

    while(i<n1){
        if(unionArr.size()==0 ||
               unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
        }
        i++;

    }
    for(auto it:unionArr){
        cout<<it<<" ";
    }

}