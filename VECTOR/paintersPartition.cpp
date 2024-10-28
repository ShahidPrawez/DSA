#include<iostream>
#include<vector>
using namespace std;
bool isPosible(vector<int> &arr, int n, int m, int maxallowedT){
    int painter=1, time=0;
    for(int i=0; i<n; i++){
        if(time+arr[i] <= maxallowedT){
            time +=arr[i];
        }
        else{
            painter++;
            time =arr[i];
        }
    }
    return painter<=m;
}
int minTimePainter(vector<int> &arr, int n, int m){
    int sum=0, maxval=INT16_MIN;
    for(int i=0; i<n; i++){
        sum +=arr[i];
        maxval= max(maxval, arr[i]);
    }
    int st=maxval, end= sum, ans=-1;
    while(st <= end){
        int mid=(st + end)/2;
        if(isPosible(arr, n, m, mid)){//true -> left
            ans=mid;
            end= mid-1;
        }
        else{//false -> right
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={40,30,10,20};
    int n=4,m=2;
    
    cout<<minTimePainter(arr,n,m)<<endl;
    return 0;
}