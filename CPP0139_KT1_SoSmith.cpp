#include<iostream>
#include<math.h>
using namespace std;
int sumCacChuSo(int n){
    int sum=0;
    while(n>0){
        int b=n%10;
        sum+=b;
        n/=10;
    }
    return sum;
}
int sumThuaSo(int n){
    int sum=0;
    for (int i = 2; i <= n; i++)
    {
        while(n%i==0){
            sum+=sumCacChuSo(i);
            n/=i;
        }
    }
    return sum;   
}
bool isPrime(int n){
    if(n<2) 
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0) 
            return 0;
    }
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isPrime(n)) cout<<"NO"<<endl;
        else{
            sumThuaSo(n)==sumCacChuSo(n)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
}
}