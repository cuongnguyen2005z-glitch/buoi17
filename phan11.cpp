// Bài 1.1 — In địa chỉ của biến (Cơ bản) 
// Khai báo 3 biến với các kiểu dữ liệu khác nhau (int, float, char). 
// Dùng toán tử & để in ra địa chỉ bộ nhớ của từng biến.
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    cout << "Dia chi cua bien a: " << &a << endl;
    cout << "Dia chi cua bien b: " << &b << endl;
    cout << "Dia chi cua bien c: " << (void*)&c << endl;

    return 0;
}