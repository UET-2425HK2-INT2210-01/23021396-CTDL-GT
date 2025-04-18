#include <iostream>
using namespace std;

// Hàm đệ quy đếm số chữ số của một số nguyên
int countDigits(int n) {
    if (n < 10 && n > -10) // Điều kiện dừng: nếu số chỉ còn 1 chữ số, trả về 1
        return 1;
    return 1 + countDigits(n / 10); // Gọi đệ quy: loại bỏ chữ số cuối và tăng đếm lên 1
}

int main() {
    int n;
    cin >> n;
    // Tính và in số lượng chữ số
    cout << countDigits(abs(n)) << endl;

    return 0;
}
