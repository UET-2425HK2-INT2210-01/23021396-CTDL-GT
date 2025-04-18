#include <iostream>
using namespace std;

// Hàm đệ quy tính giai thừa của n
int factorial(int n) {
    if (n == 0 || n == 1) // Điều kiện dừng: giai thừa của 0 hoặc 1 là 1
        return 1;
    return n * factorial(n - 1); // Gọi đệ quy: n * giai thừa của (n - 1)
}

int main() {
    int n;
    cin >> n;
    // Kiểm tra đầu vào, giai thừa chỉ được định nghĩa cho số nguyên không âm
    if (n < 0) {
        cout << "Invalid" << endl;
    } else {
        // Nếu hợp lệ, tính và in giai thừa
        cout << factorial(n) << endl;
    }

    return 0;
}
