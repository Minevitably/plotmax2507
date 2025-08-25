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
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *guard = new ListNode(0, head);
        ListNode *curr = guard;
        while (curr != nullptr && curr->next != nullptr) {
            while (curr->next != nullptr && curr->next->val == val) {
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        return guard->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
