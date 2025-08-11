#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void inorder(TreeNode *node, vector<int> &result) {
        if (node == nullptr) {
            result.push_back(INT_MIN);
            return;
        }
        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
    }

public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }

private:
    void postorder(TreeNode *node, vector<int> &result) {
        if (node == nullptr) {
            result.push_back(INT_MIN);
            return;
        }
        postorder(node->left, result);
        postorder(node->right, result);
        result.push_back(node->val);
    }

public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> result;
        postorder(root, result);
        return result;
    }

public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        vector<int> pInOrderList = inorderTraversal(p);
        vector<int> pPostOrderList = postorderTraversal(p);
        vector<int> qInOrderList = inorderTraversal(q);
        vector<int> qPostOrderList = postorderTraversal(q);
        if (pInOrderList.size() != qInOrderList.size()) {
            return false;
        }
        for (int i = 0; i < pInOrderList.size(); i++) {
            if ((pInOrderList[i] != qInOrderList[i]) ||
                (pPostOrderList[i] != qPostOrderList[i])) {
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
