#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>
#include <queue>

using namespace std;

class MyStack {
private:
    queue<int> queue1;
    queue<int> queue2;
public:
    MyStack() {
    }

    void push(int x) {
        queue1.push(x);
    }

    int pop() {
        size_t size = queue1.size();
        for (int i = 0; i < size - 1; i++) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int v = queue1.front();
        queue1.pop();
        for (int i = 0; i < size - 1; i++) {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return v;
    }

    int top() {
        size_t size = queue1.size();
        for (int i = 0; i < size - 1; i++) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int v = queue1.front();
        queue2.push(v);
        queue1.pop();
        for (int i = 0; i < size; i++) {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return v;
    }

    bool empty() {
        return queue1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
