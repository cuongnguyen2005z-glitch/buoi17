#include <iostream>
#include <string>
using namespace std;

int demKyTu(string s, char c){
    int dem = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == c){
            dem++;
        }
    }

    return dem;
}

int main(){
    string s;
    char c;

    cout << "Nhap chuoi: ";
    getline(cin, s);

    cout << "Nhap ky tu can tim: ";
    cin >> c;

    int ketQua = demKyTu(s, c);

    if (ketQua == 0){
        cout << "Ky tu '" << c << "' khong xuat hien trong chuoi.";
    }
    else{
        cout << "Ky tu '" << c << "' xuat hien " << ketQua << " lan.";
    }

    return 0;
}