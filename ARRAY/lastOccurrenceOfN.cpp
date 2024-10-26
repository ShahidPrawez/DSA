#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int size=5;
    cout<<"Enter five Element in array : ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int n;
    cout<<"Enter find number of last occurrence : ";
    cin>>n;
    int occur=-1;
    int same=0;
    // method 1) o--> size-1; (Last occurrence)
    for(int i=0; i<5; i++){
        if(arr[i]== n){
            occur=i;
            same+=arr[i];
        }
    }
    cout<<occur<<endl;
    //method 2) size-1 ---> i=0; (forst Occurrence)
    for(int i=size-1; i<=0; i--){
        if(arr[i]==n){
            occur=i;
        }
    }
    cout<<occur<<endl;
    cout<<"sum fo find occurrence = "<<same<<endl;
}