#include<bits/stdc++.h>
using namespace std;
// struct SinhVien
// {
//     string ma,ten,lop;
//     int d,m,y;
//     float gpa;
// };
// string maSV(int i){
//     string s = to_string(i);
//     while (s.length()<3)
//         s='0'+s;
//     return "B20DCCN"+s;
// }
// void chuanHoa(string &str){
//     string s,res="";
//     stringstream ss(str);
//     while(ss>>s){
//         transform(s.begin(),s.end(),s.begin(),::tolower);
//         s[0]=toupper(s[0]);
//         res+=s+' ';
//     }
//     res.pop_back();
//     str=res;
// }
// void nhap(SinhVien ds[],int N){
//     for (int i = 0; i < N; i++)
//     {
//         scanf("\n");
//         ds[i].ma = maSV(i+1);
//         getline(cin,ds[i].ten);
//         chuanHoa(ds[i].ten);
//         getline(cin,ds[i].lop);
//         scanf("%d/%d/%d %f", &ds[i].d, &ds[i].m, &ds[i].y, &ds[i].gpa);
        
//     }
// }
// void in(SinhVien ds[],int N){
//     for (int i = 0; i < N; i++)
//     {
//         cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop;
//         printf(" %.2d/%.2d/%.4d %.2f\n", ds[i].d, ds[i].m, ds[i].y, ds[i].gpa);
//     } 
// }

struct SinhVien
{
    string ma,ten,lop,ns;
    double gpa;
};
void chuanHoa(string &str){
    string res = "";
    stringstream ss(str);
    string token;
    while(ss>>token){
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++)
        {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    str = res;
}
void nhap(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].ten);
        chuanHoa(a[i].ten);
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