#include <iostream>
using namespace std;

// Hàm đệ quy tính tổng các chữ số của một số nguyên
int sumOfDigits(int n) {
    if (n == 0) // Điều kiện dừng: nếu n bằng 0, trả về 0
        return 0;
    return abs(n % 10) + sumOfDigits(n / 10); // Gọi đệ quy: cộng chữ số cuối với tổng các chữ số còn lại
}

int main() {
    int n;
    cin >> n;

    // Tính và in tổng các chữ số
    cout << sumOfDigits(n) << endl;

    return 0;
}
