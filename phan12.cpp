// Bài 1.2 — Quan sát địa chỉ thay đổi
//  Khai báo một mảng 5 phần tử, in ra địa chỉ của từng phần tử trong mảng. 
//  Nhận xét về khoảng cách địa chỉ giữa các phần tử liên tiếp.clude <iostream>
#include <iostream>
using namespace std;

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        cout << "Dia chi cua a[" << i << "]: " << &a[i] << endl;
    }

    return 0;
}