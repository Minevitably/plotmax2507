#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


class Solution {
private:
    bool isAlphanumeric(char ch) {
        if (('a' <= ch && ch <= 'z') || ('0' <= ch && ch <= '9')) {
            return true;
        }
        return false;
    }

public:
    bool isPalindrome(string s) {
        string t;
        for (char ch: s) {
            ch = (char)tolower(ch);
            if (isAlphanumeric(ch)) {
                t.push_back(ch);
            }
        }
        for (int i = 0; i < t.size() / 2; i++) {
            if (t[i] != t[t.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    (new Solution())->isPalindrome("A man, a plan, a canal: Panama");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
