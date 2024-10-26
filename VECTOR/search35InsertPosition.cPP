#include<iostream>
#include<vector>
using namespace std;
int searchposition(vector<int> arr, int tar){
   int l =0, r=arr.size()-1;
    while(l<= r){
        int mid = (l + r) /2;
        if(tar > arr[mid]){
            l=mid+1;
        }
         else if(tar < arr[mid]){
            r = mid-1;
        }
        else{
            return mid;
        }
    }
    return l;
    
}
int main(){
    vector<int> arr={1,3,5,6,8};
    int target =4;
    cout<<searchposition(arr,target);
}