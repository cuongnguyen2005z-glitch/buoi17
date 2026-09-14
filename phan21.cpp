// Bài 2.1 — Khai báo và khởi tạo con trỏ
// Khai báo một biến số nguyên x, khai báo con trỏ p trỏ đến x.
// In ra giá trị của x, địa chỉ của x, giá trị của p, và giá trị mà p đang trỏ tới (dùng toán tử *).

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    cout << "Gia tri cua x: " << x << endl;
    cout << "Dia chi cua x: " << &x << endl;
    cout << "Gia tri cua p: " << p << endl;
    cout << "Gia tri ma p dang tro toi: " << *p << endl;

    return 0;
}