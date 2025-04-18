#include <iostream>
using namespace std;

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n == 0) // Điều kiện dừng 1: F(0) = 0
        return 0;
    if (n == 1) // Điều kiện dừng 2: F(1) = 1
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // Gọi đệ quy: F(n) = F(n-1) + F(n-2)
}

int main() {
    int n;
    cin >> n;

    // Kiểm tra đầu vào, số Fibonacci chỉ được định nghĩa cho số nguyên không âm
    if (n < 0) {
        cout << "Invalid" << endl;
    } else {
        // Nếu hợp lệ, tính và in số Fibonacci thứ n
        cout << fibonacci(n) << endl;
    }

    return 0;
}
