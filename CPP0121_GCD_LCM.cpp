#include<iostream>
#include<math.h>
using namespace std;
int GCD(int a, int b){
    if(b==0) return a;
    else return GCD(b,a%b);
}
long long LCM(int a, int b){
    return (long long) a*b/GCD(a,b);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<LCM(a,b)<<" "<<GCD(a,b)<<endl;
    }
    
}