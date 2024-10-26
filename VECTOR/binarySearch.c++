#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int tar){
    int l=0, r=arr.size()-1;
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
    return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,10};
    int tar1=5;
    cout<<binarySearch(arr1,tar1)<<endl;
    
}