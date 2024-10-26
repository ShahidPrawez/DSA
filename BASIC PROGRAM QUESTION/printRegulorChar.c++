#include<iostream>
using namespace std;
int main(){
    char ch='A';
    // int num=65;
    int n=4;
    for(int i=0;i<n; i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            // num++;
            ch=ch+1;
        }
        cout<<endl; 
    }
}