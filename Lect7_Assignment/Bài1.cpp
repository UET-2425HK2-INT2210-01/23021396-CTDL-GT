#include <iostream>
using namespace std;

// Hàm đệ quy tính tổng các số từ 1 đến n
int sumFrom1ToN(int n) {
    if (n == 1) // Điều kiện dừng: nếu n bằng 1 thì trả về 1
        return 1;
    return n + sumFrom1ToN(n - 1); // Gọi đệ quy: n + tổng các số từ 1 đến n-1
}

int main() {
    int n;
    // Nhập vào giá trị của n
    cin >> n;
    // Kiểm tra nếu n nhỏ hơn 1 (đầu vào không hợp lệ)
    if (n < 1) {
        cout << "Invalid" << endl;
    } else {
        cout << sumFrom1ToN(n) << endl;
    }

    return 0; // Kết thúc chương trình
}
