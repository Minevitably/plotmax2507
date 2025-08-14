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
private:
    int height(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return max(height(root->left), height(root->right)) + 1;
    }

public:
    bool isBalanced(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        if (abs(lh - rh) > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
