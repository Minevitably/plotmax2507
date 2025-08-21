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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode *nodeA = headA;
        ListNode *nodeB = headB;
        int listALength = 0;
        int listBLength = 0;
        while (nodeA->next != nullptr) {
            listALength++;
            nodeA = nodeA->next;
        }
        while (nodeB->next != nullptr) {
            listBLength++;
            nodeB = nodeB->next;
        }

        if (nodeA == nodeB) {
            if (listALength > listBLength) {
                nodeA = headA;
                nodeB = headB;
            } else {
                nodeA = headB;
                nodeB = headA;
            }
            for (int i = 0; i < abs(listALength - listBLength); i++) {
                nodeA = nodeA->next;
            }
            while (nodeA != nodeB) {
                nodeA = nodeA->next;
                nodeB = nodeB->next;
            }
            return nodeA;
        }
        return nullptr;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
