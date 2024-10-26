#include<iostream>
using namespace std;
int main(){
    int num [6]={5,1,9,-8,20,3};
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    int i;
    for(i=0; i<6; i++){
        smallest=min(num[i],smallest);
        break;
    }
     for(int i=0; i<6; i++){
        largest=max(num[i],largest);
        }
    cout<<"smallest = "<<smallest<<"  ind="<<i<<endl;
    cout<<"larger = "<<largest<<"   idx = "<<i<<endl;
    return 0;

}