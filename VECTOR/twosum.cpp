// !PROPPER
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,3,4,8,9};
    vector<int> ans;
    int target =17;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; i<arr.size(); j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                for(int val : ans){
                    cout<<val<<" ";
                }
            }
        }
       
    }
    

}