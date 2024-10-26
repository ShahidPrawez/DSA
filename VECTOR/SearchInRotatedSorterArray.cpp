#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr, int tar){
    int s=0, end=arr.size()-1;
    while(s <= end){
        int mid =(s+end)/2;
        if(arr[mid] == tar){
            return mid;
        }
        if(arr[s] <= arr[mid]){
            if(arr[s] <= tar && tar <= arr[mid]){
                end =mid-1;
            }else{
                s =mid+1;
            }
        }
        else {
            if(arr[mid]<=tar && tar <= arr[end]){
                s=mid+1;
            }else{
                end=mid-1;
            }

        }
    }
    return -1;
}
int main(){
    vector<int> arr1={4,5,6,7,0,1,2};
    int target1=7;
    cout<<search(arr1,target1);
}