#include <bits/stdc++.h>
using namespace std;
double score(int n){
    if(n%5!=0) return -1;
    if(n>990) return -1;
    if(n<=445) return -1;
    if(n >= 450 && n <= 520 ) return 7;
    if(n >= 525 && n <= 595 ) return 8;
    if(n >= 600 && n <= 725 ) return 9;
    return 10;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        cout<<score(a)<<endl;
    }
    return 0;
}