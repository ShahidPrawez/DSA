#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* p=arr;

    cout<<*(p+1)<<endl;
    cout<<*(p+3)<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;

}