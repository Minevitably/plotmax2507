#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        int minLength = INT_MAX;
        for (const auto &item: strs) {
            if (item.length() < minLength) {
                minLength = item.length();
            }
        }

        for (int i = 0; i < minLength; i++) {
            result.push_back(strs[0][i]);
            for (const auto &item: strs) {
                if (item[i] != result[i]) {
                    result.pop_back();
                    return result;
                }
            }
        }

        return result;

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
