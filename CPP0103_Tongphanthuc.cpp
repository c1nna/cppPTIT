#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    double s = 0;
    for(int i = 1;i <= t;i++){
        s+=(double)1/i;
    }
    cout << fixed << setprecision(4) << s;
    return 0;
}