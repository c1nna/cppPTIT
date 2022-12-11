#include <bits/stdc++.h>
using namespace std;

struct sv
{
    string ma,ten,lop,ns;
    double gpa;
    void in(){
        cout<<"-----"<<endl;
        cout<<"MSV: "<<ma<<endl;
        cout<<"Ten: "<<ten<<endl;
        cout<<"Lop: "<<lop<<endl;
        cout<<"Ngay sinh: "<<ns<<endl;
        cout<<"GPA: "<<fixed<<setprecision(2)<<gpa<<endl;
        cout<<"-----"<<endl;
    }
    void nhap(){
        cout<<"MSV: ";cin>>ma;
        cout<<"Ten: ";
        cin.ignore(); getline(cin,ten);
        cout<<"Lop: ";cin>>lop;
        cout<<"Ngay sinh: ";cin>>ns;
        cout<<"GPA: ";cin>>gpa;
    }
};

void inds(sv a[],int n){
    cout<<"Thong tin"<<endl;
    for (int i = 0; i < n; i++)
    {
        a[i].in();
    }
}

void tim(sv a[], int n){
    string ma;
    cout<<"Nhap ma: ";cin>>ma;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if(a[i].ma.find(ma) != string::npos){ //find()
            a[i].in();
            found = true;
        }
    }
    if(!found) cout<<"Khong tim thay"<<endl;
}

void gpaMax(sv a[], int n){
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i].gpa > res)
            res = a[i].gpa;
    }
    cout<<"DS GPA cao nhat: "<<endl;
    for (int i = 0; i < n; i++)
    {
        if(res == a[i].gpa)
            a[i].in();
    }
}

bool cmp1(sv a, sv b){
    return a.gpa > b.gpa;
}

void gpaLK(sv a[], int n){
    vector<sv> v;
    for (int i = 0; i < n; i++)
    {
        if(a[i].gpa >= 2.5)
            v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), cmp1);
    cout<<"DS SV GPA >= 2.5"<<endl;
    for(sv x:v){
        x.in();
    }
}

vector<string> chuanHoa(string name){
    stringstream ss(name);
    vector<string> v;
    string token;
    while(ss>>token){
        v.push_back(token);
    }
    // res += v[v.size() - 1];
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     res += v[i];
    // }
    return v;
}

bool cmp2(sv a, sv b){
    vector<string> v1 = chuanHoa(a.ten), v2 = chuanHoa(b.ten);
    if(v1.back() != v2.back())
        return v1.back()< v2.back();
    int len1 = v1.size(), len2 = v2.size();
    for (int i = 0; i < min(len1,len2); i++)
    {
        if(v1[i] != v2[i])
            return v1[i] < v2[i];
    }
    return len1 < len2;
}

void sxten(sv a[], int n){
    sort(a, a+n, cmp2);
}

bool cmp3(sv a, sv b){
    if(a.lop != b.lop)
        return a.lop < b.lop;
    vector<string> v1 = chuanHoa(a.ten), v2 = chuanHoa(b.ten);
    if(v1.back() != v2.back())
        return v1.back()< v2.back();
    int len1 = v1.size(), len2 = v2.size();
    for (int i = 0; i < min(len1,len2); i++)
    {
        if(v1[i] != v2[i])
            return v1[i] < v2[i];
    }
    return len1 < len2;
}

void sxlop(sv a[], int n){
    sort(a, a+n, cmp3);
}

bool cmp4(sv a, sv b){
    if(a.lop != b.lop) 
        return a.lop < b.lop;
    return a.gpa > b.gpa;
}

void sxlop2(sv a[], int n){
    sort(a, a + n, cmp4);
}

int main(){
    sv a[1000];
    int n = 0;
    while (1)
    {
        cout<<"---MENU---"<<endl;
        cout<<"1. Nhap thong tin"<<endl;
        cout<<"2. Hien thi danh sach SV"<<endl;
        cout<<"3. Tim kiem SV theo ma"<<endl;
        cout<<"4. Liet ke SV GPA cao nhat"<<endl;
        cout<<"5. Liet ke SV co GPA >=2.5"<<endl;
        cout<<"6. SX theo ten"<<endl;
        cout<<"7. SX theo lop, cung lop xep theo ten"<<endl;
        cout<<"8. SX theo lop, cung lop xep theo GPA"<<endl;
        cout<<"0. Thoat"<<endl;
        cout<<"-----"<<endl;
        cout<<"Nhap lua chon: "<<endl;
        int lc; cin>>lc;
        if(lc == 1){
            a[n].nhap();
            ++n;
        }
        if(lc == 2){
            inds(a,n);
        }
        if(lc == 3){
            tim(a,n);
        }
        if(lc == 4){
            gpaMax(a,n);
        }
        if(lc == 5){
            gpaLK(a,n);
        }
        if(lc == 6){
            sxten(a,n);
        }
        if(lc == 7){
            sxlop(a,n);
        }
        if(lc == 8){
            sxlop2(a,n);
        }
        if(lc == 0)
            break;
    }
    return 0;
}
