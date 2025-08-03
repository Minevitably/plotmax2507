#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isOpenBracket(char ch) {
        if (ch == '(' || ch == '[' || ch == '{') {
            return true;
        }
        return false;
    }

    bool isCloseBracket(char ch) {
        if (ch == ')' || ch == ']' || ch == '}') {
            return true;
        }
        return false;
    }

    bool isPair(char openBracket, char closeBracket) {
        if (openBracket == '(' && closeBracket == ')') {
            return true;
        }
        if (openBracket == '[' && closeBracket == ']') {
            return true;
        }
        if (openBracket == '{' && closeBracket == '}') {
            return true;
        }
        return false;
    }

    bool isValid(string s) {
        int length = s.size();
        if (length % 2 != 0) {
            return false;
        }

        vector<char> stack;
        for (const auto &item: s) {
            if (isOpenBracket(item)) {
                stack.push_back(item);
            } else if (isCloseBracket(item)) {
                if (stack.empty()) {
                    return false;
                }
                const char &ch = stack.back();
                if (!isPair(ch, item)) {
                    return false;
                }
                stack.pop_back();
            }
        }

        return stack.empty();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
