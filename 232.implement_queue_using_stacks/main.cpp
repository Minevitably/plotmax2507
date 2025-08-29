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
public:
    MyQueue() {

    }

    void push(int x) {
        stack1.push(x);
    }

    int pop() {
        int size = stack1.size();
        for (int i = 0; i < size - 1; i++) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int v = stack1.top();
        stack1.pop();
        for (int i = 0; i < size - 1; i++) {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return v;
    }

    int peek() {
        int size = stack1.size();
        for (int i = 0; i < size; i++) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int v = stack2.top();
        for (int i = 0; i < size; i++) {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return v;
    }

    bool empty() {
        return stack1.empty();
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
