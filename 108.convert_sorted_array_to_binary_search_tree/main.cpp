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
    TreeNode *buildBST(vector<int> &nums, int i, int j) {
        if (i > j) {
            return nullptr;
        }
        int mid = i + (j - i) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = buildBST(nums, i, mid - 1);
        root->right = buildBST(nums, mid + 1, j);
        return root;
    }
public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
