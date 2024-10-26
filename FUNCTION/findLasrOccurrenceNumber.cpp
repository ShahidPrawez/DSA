#include<iostream> 
using namespace std;
int occurrence(int arr[], int n, int size, int occur){
    
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            occur=i;
        }
    }
}
int main(){
    int arr[]={1,2,1,5,6};
    int size=5;
    int n;
    cin>>n;
    int occur=-1;
    cout<<occurrence(arr,n,size,occur);
}