#include<iostream>
using namespace std;
int main(){
    int num [6]={5,1,9,-8,20,3};
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    for(int i=0; i<6; i++){
        smallest=min(num[i],smallest);
        largest=max(num[i],largest);
    }
    cout<<"larger = "<<largest<<endl;
    cout<<"smallest = "<<smallest<<endl;
    return 0;

}