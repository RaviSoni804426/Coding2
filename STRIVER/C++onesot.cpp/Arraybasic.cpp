#include<bits/stdc++.h>
using namespace std;
bool firstPlayerWins(const string& s) {
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            return true;
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (firstPlayerWins(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}








#include<bits/stdc++.h>
using namespace std;
class MinStack {
private:
    stack<int> dataStack;
    stack<int> minStack;

public:
    /** Initialize your data structure here. */
    MinStack() {
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        dataStack.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }
    
    /** Removes the element on top of the stack. */
    void pop() {
        if (dataStack.top() == minStack.top()) {
            minStack.pop();
        }
        dataStack.pop();
    }
    
    /** Get the top element. */
    int top() {
        return dataStack.top();
    }
    
    /** Get the minimum element in the stack. */
    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Minimum element: " << minStack.getMin() << endl;
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl;
    cout << "Minimum element: " << minStack.getMin() << endl;

    return 0;
}
