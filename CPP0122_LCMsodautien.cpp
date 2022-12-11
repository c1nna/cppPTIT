#include<iostream>
#include<math.h>
using namespace std;
long long GCD(long long a, long long b){
    if(b==0) return a;
    else return GCD(b,a%b);
}
void Test_Case(){
    long long n;
    cin>>n;
    long long res = 1;
    for (long long i = 1; i <= n; i++)
    {
        long long g = GCD(res,i);
        res = res * i/g;
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Test_Case();
    }
    return 0;
}
