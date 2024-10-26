#include<iostream>
using namespace std;
bool powerOfTwo(int n){
    if(n < 1){
        return false;
    }
    while(n %2 ==0){
        n/=2;
    }
    return n==1;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<powerOfTwo(a);
}
