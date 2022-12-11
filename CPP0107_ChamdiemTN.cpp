#include<iostream>
#include<iomanip>
using namespace std;
string ma1="ABBADCCABDCCABD";
string ma2="ACCABCDDBBCDDBB";
void Test_Case(){
    int n;
    cin>>n;
    double d=0;
    if(n==101){
        for (int i = 0; i < 15; i++)
        {
            char c;
            cin>>c;
            if(c==ma1[i]){
                d+=(double)2/3;
            }
        }
        
    }
    else if(n==102){
        for (int i = 0; i < 15; i++)
        {
            char c;
            cin>>c;
            if(c==ma2[i]){
                d+=(double)2/3;
            }
        }   
    }
    cout<<fixed<<setprecision(2)<<d<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Test_Case();
    }
    return 0;
}