#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n;
        cin>>n;
        long long s = n*(n+1)/2;
        cout<< s <<endl;
        t=t-1;
    }
}