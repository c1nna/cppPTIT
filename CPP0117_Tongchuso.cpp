#include<iostream>
using namespace std;
long long num(long long n){
    if(n<=9) return n;
    long long sum = 0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    n=sum;
    return num(n);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        cout<<num(n)<<endl;
    }
    return 0;
    
}