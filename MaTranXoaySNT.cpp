#include <bits/stdc++.h>
using namespace std;
int nt(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return n>1;
}
int p[100];
void init(){
    int i=0, cnt = 0;
    while (cnt < 100) 
    {
        if(nt(i)){
            p[cnt] = i;
            ++cnt;
        }
        ++i;
    }
}
int main(){
    int t;cin>>t;
    for(int k = 1; k<=t; k++)
    {
    init();
    int n;scanf("%d",&n);
    int a[n][n], cnt=0;
    int h1=0, h2=n-1, c1=0, c2=n-1;
    while(h1<=h2 && c1<=c2){
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i]=p[cnt];
            ++cnt;
        }
        ++h1;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2]=p[cnt];
            ++cnt;
        }
        --c2;
        if(c1<=c2){
            for (int i = c2; i >= c1; i--)
            {
                a[h2][i]=p[cnt];
                ++cnt;
            }
            --h2;
        }
        if(h1<=h2){
            for (int i = h2; i >= h1; i--)
            {
                a[i][c1]=p[cnt];
                ++cnt;
            }
            ++c1;
        }
    }
    
    cout<<"Test "<<k<<":"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        cout<<endl;
    }
    }
    return 0;
}