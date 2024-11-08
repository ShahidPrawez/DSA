#include<iostream>
#include<vector>
using namespace std;
int main(){
        string str="shahid";
        int st=0, end=str.length()-1;
        while(st < end){
        swap(str[st++], str[end--]);
        }
        cout<<str<<" "<<endl;
}