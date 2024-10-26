#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,7,5,8};
    int n=5;
    int curSum=0, maxSum =INT_MIN;
    for(int i=0; i<n; i++){
        curSum+=arr[i];
        maxSum=max(curSum,maxSum);
        if(curSum <0){
            curSum = 0;
        }
        cout<<maxSum<<endl;
    }
}