#include <iostream>
using namespace std;

// Hàm đệ quy tính lũy thừa a^b
double power(double a, int b) {
    if (b == 0) // Điều kiện dừng: a^0 = 1
        return 1;
    if (b < 0) // Xử lý trường hợp số mũ âm: a^(-b) = 1 / (a^b)
        return 1 / power(a, -b);
}

int main() {
    double base;
    int exponent;
    cin >> base;
    cin >> exponent;

    // Tính và in kết quả
    cout << power(base, exponent) << endl;

    return 0;
}
