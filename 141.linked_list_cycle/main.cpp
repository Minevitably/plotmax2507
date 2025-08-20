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
            if (curr->next == head) {
                return nullptr;
            }
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
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
