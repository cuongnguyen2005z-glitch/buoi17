#include <iostream>
using namespace std;

long long fibonacci(int n){
    long long a = 1, b = 1, c;

    cout << "F1 = " << a << endl;

    if (n >= 2){
        cout << "F2 = " << b << endl;
    }

    for (int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;

        cout << "F" << i << " = " << b << endl;
    }

    return b;
}

int main(){
    int n;

    cout << "Nhap n: ";
    cin >> n;

    if (n <= 0){
        cout << "n khong hop le";
    }
    else{
        cout << "Day Fibonacci:" << endl;

        long long ketQua = fibonacci(n);

        cout << "So fibonacci thu " << n << " la: " << ketQua;
    }

    return 0;
}