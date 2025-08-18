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
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) {
            return false;
        }
        ListNode *curr = head;
        while (curr != nullptr) {
            ListNode *tempCurr = head;
            // check curr whether in [head,curr)
            while (tempCurr != curr) {
                if (curr->next == tempCurr) {
                    return true;
                }
                tempCurr = tempCurr->next;
            }
            // boundary situation, check curr
            // [head, curr]
            if (tempCurr == curr && curr->next == tempCurr) {
                return true;
            }

            curr = curr->next;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
