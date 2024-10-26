#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz, int target){
    for(int i=0; i<6; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,5,6,8,3};
    int sz=6;
    int target=3;
    cout<<linearsearch(arr,sz,target);


}