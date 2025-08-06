#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size() - 1;
        // skip whitespaces at end of s
        while (j >= 0 && s[j] == ' ') {
            j--;
        }
        int end = j;

        while (j >= 0 && s[j] != ' ') {
            j--;
        }
        if (j >= 0 && s[j] != ' ') {
            return end - j + 1;
        }
        return end - j;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
