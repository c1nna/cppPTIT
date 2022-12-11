#include<iostream>
#include<string>
using namespace std;
bool isVowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') return 1;
        return 0;
}
int main(){
    string s;cin>>s;
    for(char x:s){
        x = tolower(x);
        if(!isVowel(x))
            cout<<"."<<x;
    }
    return 0;
}