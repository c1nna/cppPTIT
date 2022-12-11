#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    { 
        int d,m,y,n;
        cin>>n;
        scanf("%d/%d/%d",d,m,y);
        printf("%.2d/%.2d/%.4d", d,m,y+n );
    }
}