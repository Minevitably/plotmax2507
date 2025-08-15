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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        targetSum -= root->val;
        // leaf node
        if (root->left == nullptr && root->right == nullptr) {
            if (targetSum == 0) {
                return true;
            }
            return false;
        }

        // childs
        bool l = hasPathSum(root->left, targetSum);
        bool r = hasPathSum(root->right, targetSum);
        return l || r;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
