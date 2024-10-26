#include<bits/stdc++.h>
using namespace std;
int hexadecimalTobeciaml(string n){
    int ans=0;
    int x=1, s=n.size(); 
    for(int i=s-1; i>=0; i--){
        if(n[i] >='0' && n[i] <='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='a' && n[i]<='f'){
            ans+=x*(n[i]-'a' +10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter hexadecimal number : ";
    cin>>s;
    cout<<hexadecimalTobeciaml(s)<<endl;
}
