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

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        // if no left child, return right child minDepth + 1
        if (root->left == nullptr) {
            return minDepth(root->right) + 1;
        }
        // if no right child, return left child minDepth + 1
        if (root->right == nullptr) {
            return minDepth(root->left) + 1;
        }
        // if both child is alive
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
