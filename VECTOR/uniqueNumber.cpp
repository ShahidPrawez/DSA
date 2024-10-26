#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={8,2,5,5,8,8};
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i];
        }
    }
}