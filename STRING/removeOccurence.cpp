#include<iostream>
#include<string>
using namespace std;
    string removeoccur(string s, string part){
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part) , part.length());
        }
        return s;
    }
 int main(){
    string s1 ="daabcbaabcbc";
    string part1="abc";
    cout<<"result : "<<removeoccur(s1,part1);
    return 0;
 }