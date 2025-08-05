#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++) {
            string sub = haystack.substr(i, needle.size());
            if (sub == needle) {
                return i;
            }
        }
        return -1;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
