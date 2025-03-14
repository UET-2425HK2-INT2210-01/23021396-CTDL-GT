#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParentheses(string s) {
    stack<char> st;

    for (char c : s) {

        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }

        else if (c == ')' || c == ']' || c == '}') {

            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return st.empty();
}
int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        if (isValidParentheses(s)) {
            cout << "Valid" << endl;
        }
        else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}