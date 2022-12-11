#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int, int> m;
        for(int &i:a){
            cin>>i;
            m[i]++;
        }
        int check=1;
        for(int i:a){
            if(m[i]>1){
                cout<<i;
                check=0;
                break;
            }
        }
        if(check) cout<<"NO";
        cout<<endl;
    }
    return 0;
}