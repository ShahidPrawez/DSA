#include<iostream>
#include<vector>
using namespace std;
int peakElement(vector<int> arr){
    int s=1, end=arr.size()-2;
    while(s <= end){
        int mid = (s+end)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }else if(arr[mid-1] < arr[mid]){
            s=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1={1,2,5,10,20,9,6,3,2,0};
    cout<<"peak element idx: "<<peakElement(arr1)<<endl;
}