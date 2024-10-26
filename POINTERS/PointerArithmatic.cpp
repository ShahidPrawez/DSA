#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* ptr=&a;
    cout<<ptr<<"->"<<*ptr<<endl;
    *ptr++;
    cout<<ptr<<"->"<<*ptr<<endl;
    ptr--;
    cout<<ptr<<"->"<<*ptr<<endl;
    cout<<"Arithmatic operation on pointer\n";
    int b=10;
    int *ptr2=&b;
    ptr2+=2;
}