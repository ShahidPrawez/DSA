#include<iostream>
using namespace std;
int decimalTobinary(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x*=2;
        x/=2;
    }
    while(x>0){
        int last=n/x;
        n-=last*x;
        x/=2;
        ans= ans*10+last
    }
}
int main(){
    int n;
    cout<<"Enter decimal number: ";
    cin>>n;
    cout<<decimalTobinary(n);
}