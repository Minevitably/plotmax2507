#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    bool isPalindrome(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        int size = 0;
        ListNode *curr = head;
        while (curr != nullptr) {
            curr = curr->next;
            size++;
        }

        // if size is odd, curr == mid
        // if size is even, curr == mid->next
        curr = head;
        for (int i = 0; i < size / 2; i++) {
            curr = curr->next;
        }
        // reverse
        ListNode *prev = nullptr;
        while (curr != nullptr) {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        // compare
        ListNode *tail = prev;
        for (int i = 0; i < size / 2; i++) {
            if (tail->val != head->val) {
                return false;
            }
            tail = tail->next;
            head = head->next;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
