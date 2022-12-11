#include<bits/stdc++.h>
using namespace std;
// struct SinhVien
// {
//     string ma,ten,lop,sinh;
//     float gpa;
// };
// string maSV(int i){
//     string s = to_string(i);
//     while (s.length()<3)
//         s='0'+s;
//     return "B20DCCN"+s;
// }
// void nhap(SinhVien ds[],int N){
//     for (int i = 0; i < N; i++)
//     {
//         scanf("\n");
//         ds[i].ma = maSV(i+1);
//         getline(cin,ds[i].ten);
//         cin>>ds[i].lop>>ds[i].sinh>>ds[i].gpa;
//         if(ds[i].sinh.length()==8){
//             ds[i].sinh='0'+ds[i].sinh.substr(0,2)+'0'+ds[i].sinh.substr(2);
//         }
//         else if(ds[i].sinh.length()==9){
//             if(ds[i].sinh[1]=='/')
//                 ds[i].sinh='0'+ds[i].sinh;
//             else
//                 ds[i].sinh=ds[i].sinh.substr(0,3)+'/'+ds[i].sinh.substr(3);
//         }
//     }
// }
// void in(SinhVien ds[],int N){
//     for (int i = 0; i < N; i++)
//     {
//         cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].sinh<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
//     } 
// }

struct SinhVien
{
    string ma,ten,lop,ns;
    double gpa;
};
void nhap(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {   
        cin.ignore();
        getline(cin, a[i].ten);
        cin>>a[i].lop;
        cin>>a[i].ns;
        cin>>a[i].gpa;
        if(a[i].ns[1] == '/'){
            a[i].ns = "0" + a[i].ns;
        }
        if(a[i].ns[4] == '/'){
            a[i].ns.insert(3,"0");
        }
    }
    
}
void in(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        string s = to_string(i+1);
        s = "B20DCCN" + string(3 - s.size(), '0') + s;
        cout<<s<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
    }
    
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}