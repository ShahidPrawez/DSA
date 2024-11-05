#include<iostream>
using namespace std;
string isprime(int n){
    for(int i=2; i*i<n; i++){
        if(i == 0){
            return "not prime";
        }
    }
    return "prime";
}
int main(){
    int n=5;
    cout<<isprime(n);
}