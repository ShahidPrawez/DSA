#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,5,5,5,6,6,6,9,9,9};
    int n=nums.size();
    vector<int> ans;
    // ans.push_back(nums[0]);
    for(int i=0; i<n; i++){
        if(nums[i] != nums[i-1]){
            ans.push_back(nums[i]);
        }
    }
    for(int val : ans){
        cout<<val;
    }
}
