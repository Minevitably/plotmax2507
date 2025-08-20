#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {

private:
    ListNode *reverse(ListNode *head) {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        // reverse linked list
        while (curr != nullptr) {
            // return nullptr if there is a cycle
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            if (curr == head) {
                return nullptr;
            }
        }
        head = prev;
        return head;
    }

public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) {
            return false;
        }
        if (reverse(head) == nullptr) {
            return true;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
