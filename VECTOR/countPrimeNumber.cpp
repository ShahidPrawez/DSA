#include<iostream>
#include<vector>
using namespace std;
int coutprime(int n){
    vector<bool> isprime(n+1, true);
        int Noisprime=0;
        for(int i=2; i<n; i++){
            if(isprime[i]){
                Noisprime++;

                for(int j=i*2; j<n; j=j+i){
                    isprime[j]=false;
                }
            }
        }
        return Noisprime;
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Between this number-> "<<n<<" prime number is: "<<coutprime(n)<<endl;
    
}