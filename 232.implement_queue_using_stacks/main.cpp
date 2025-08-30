#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>
#include <stack>

using namespace std;
class MyQueue {
private:
    stack<int> stack1;
    stack<int> stack2;

    void move() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
    }

public:
    MyQueue() {

    }

    void push(int x) {
        stack1.push(x);
    }

    int pop() {
        move();
        int v = stack2.top();
        stack2.pop();
        return v;
    }

    int peek() {
        move();
        return stack2.top();
    }

    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
