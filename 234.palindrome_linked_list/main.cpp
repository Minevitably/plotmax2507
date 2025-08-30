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
    bool isPalindrome(ListNode* head) {
        vector<ListNode *> nodes;
        while (head != nullptr) {
            nodes.push_back(head);
            head = head->next;
        }

        for (int i = 0; i < nodes.size() / 2; i++) {
            if (nodes[i]->val != nodes[nodes.size() - 1 - i]->val) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
