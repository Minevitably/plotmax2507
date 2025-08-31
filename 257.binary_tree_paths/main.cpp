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

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};


class Solution {
private:
    string pathToString(vector<int> &path) {
        if (path.empty()) {
            return "";
        }
        ostringstream oss;
        oss << path[0];
        for (int i = 1; i < path.size(); i++) {
            oss << "->" << path[i];
        }
        return oss.str();
    }

    void preOrder(TreeNode* root,vector<string> &paths, vector<int> path) {
        if (root == nullptr) {
            return;
        }
        path.push_back(root->val);
        // check leaf
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(pathToString(path));
        }
        preOrder(root->left, paths, path);
        preOrder(root->right, paths, path);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        vector<int> path;
        preOrder(root, paths, path);
        return paths;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
