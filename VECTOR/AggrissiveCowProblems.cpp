#include<iostream>
#include<vector>
using namespace std;
bool posible(vector<int> &arr, int n, int c, int minalloweddist){
    int cow=1, laststallp=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] -laststallp >= minalloweddist){
            cow++;
            laststallp=arr[i];
        }
        if(cow==c){
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &arr, int n, int c){
    sort(arr.begin(), arr.end());
    
    int st=1, end=arr[n-1] - arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(posible(arr,n,c, mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,8,4,9};
    int c=3;
    int n=5;
    cout<<getDistance(arr,n,c)<<endl;
    return 0;
}