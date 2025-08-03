#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = nullptr;
        ListNode* last = nullptr;
        while (list1 && list2) {
            int value = INT_MAX;
            if (list1->val < list2->val) {
                value = list1->val;
                list1 = list1->next;
            } else {
                value = list2->val;
                list2 = list2->next;
            }

            if (!result) {
                result = new ListNode(value);
                last = result;
            } else {
                last->next = new ListNode(value);
                last = last->next;
            }
        }

        if (!result) {
            if (list1) {
                return list1;
            }
            if (list2) {
                return list2;
            }
            return result;
        }
        if (list1) {
            last->next = list1;
        } else {
            last->next = list2;
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
