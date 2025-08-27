#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int count = 1;
        count += countNodes(root->left);
        count += countNodes(root->right);
        return count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
