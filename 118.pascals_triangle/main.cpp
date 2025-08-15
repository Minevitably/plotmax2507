#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> layer(i + 1);
            layer[0] = 1;
            layer[i] = 1;
            for (int j = 1; j < i; j++) {
                layer[j] = result[i - 1][j] + result[i - 1][j - 1];
            }
            result.push_back(layer);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
