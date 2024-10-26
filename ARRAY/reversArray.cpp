#include<iostream>
using namespace std;
int reversArray(int arr[], int size){
    int start=0, end = size -1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"before = ";
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    reversArray(arr,size);
    cout<<"\nAfter = ";
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    return 0;

}