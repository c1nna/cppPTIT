#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    while(s[s.size()-1]==' ')
         s.erase(s.begin()+s.size()-1);
    int mark = 0;
        for (int i = 0; i < s.size(); i++)
            if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+' ';
    for (int i = s.size()-1; i >= 0; i--)
        if(s[i]==' '){
            mark = i;
            break;
        }
        for (int i = mark+1; i < s.size(); i++)
            cout<<s[i];
        for(int i = 0;i < mark; i++ )
            if(i==0||s[i]!=' ' && s[i-1]==' ')
                cout<<s[i];
        cout<<"@ptit.edu.vn"<<endl;
        
}   