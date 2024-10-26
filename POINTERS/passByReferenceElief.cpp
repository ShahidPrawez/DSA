#include<iostream>
using namespace std;
int changeA(int &b){
    b=20;
}
int main(){
    int a=10;
    changeA(a);
    cout<<"the value of a: "<<a<<endl;
}