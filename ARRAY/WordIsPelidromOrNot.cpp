#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" word : ";

    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for(int i =0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check == true){
        cout<<"word is a palidrom "<<endl;
    }
    else cout<<"word is a not palidrom"<<endl;
}