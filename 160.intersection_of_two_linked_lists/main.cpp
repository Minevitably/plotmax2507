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
        ListNode *nodeA = headA;
        vector<ListNode *> vectorA;
        ListNode *nodeB = headB;
        vector<ListNode *> vectorB;

        while (nodeA != nullptr) {
            vectorA.push_back(nodeA);
            nodeA = nodeA->next;
        }
        while (nodeB != nullptr) {
            vectorB.push_back(nodeB);
            nodeB = nodeB->next;
        }

        int i = 0;
        if (vectorA.back() == vectorB.back()) {
            // tail node is same
            nodeA = vectorA[vectorA.size() - i - 1];
            nodeB = vectorB[vectorB.size() - i - 1];
            // find intersect node
            while (nodeA == nodeB) {
                i++;
                // boundary situation
                if (i >= vectorA.size()) {
                    return headA;
                }
                if (i >= vectorB.size()) {
                    return headB;
                }
                nodeA = vectorA[vectorA.size() - i - 1];
                nodeB = vectorB[vectorB.size() - i - 1];
            }
            return vectorA[vectorA.size() - i];
        }
        return nullptr;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
