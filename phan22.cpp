// Bài 2.2 — Thay đổi giá trị biến thông qua con trỏ (Cơ bản)
//  Khai báo biến x = 10 và con trỏ p trỏ đến x. 
//  Dùng *p để gán giá trị mới cho x, in lại giá trị của x để kiểm chứng.
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    *p = 20;

    cout << "Gia tri cua x sau khi thay doi: " << x << endl;

    return 0;
}