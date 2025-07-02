#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> operator_stack;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ')') {
            while (operator_stack.empty() == false
                && operator_stack.top() != '(') {
                if (operator_stack.top() != '(') {
                    cout << operator_stack.top();
                }
                operator_stack.pop();
            }
            operator_stack.pop();
        }
        else if (s[i] == '+' || s[i] == '-') {
            while (operator_stack.empty() == false
                && operator_stack.top() != '(') {
                cout << operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.push(s[i]);
        }
        else if (s[i] == '*' || s[i] == '/') {
            while ( operator_stack.empty() == false 
                && ( operator_stack.top() == '*'
                || operator_stack.top() == '/' ))
            {
                cout << operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.push(s[i]);
        }
        else if (s[i] == '(') {
            operator_stack.push(s[i]);
        }

        else {
            cout << s[i];
        }
    }

    while (!operator_stack.empty()) {
        cout << operator_stack.top();
        operator_stack.pop();
    }


    return 0;
}