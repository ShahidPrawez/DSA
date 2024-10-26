#include<iostream>
using namespace std;
int changeA(int *a){
    *a=20;
}
int main(){
    int a=10;
    changeA(&a);
    cout<<"The value of A: "<<a<<endl;
    return 0;
}