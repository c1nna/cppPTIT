#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        long long s=0;
        cin>>n>>m;
        int a[n][m], b[3][3];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin>>a[i][j];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin>>b[i][j];     
        int st1=n-2,st2=m-2;
        for (int i = 0; i < st1; i++){
            for (int j = 0; j < st2; j++){
                int st3=i+3,st4=j+3;
                for (int x = i; x < st3; x++)
                {
                    for (int y = j; y < st4; y++)
                    {
                        s+=a[x][y]*b[x-i][y-j];
                    }
                    
                }
                
            }
        }
        cout<<s<<endl;
    }
    return 0;
}