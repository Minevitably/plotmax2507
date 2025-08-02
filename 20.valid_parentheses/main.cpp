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

        vector<bool> visited(length, false);

        for (int i = 0; i < length; i++) {
            // 从左往右找到第一个闭括号
            if (visited[i] || isOpenBracket(s[i])) {
                continue;
            }
            // 从右往左找到第一个开括号
            for (int j = i - 1; j >= 0; j--) {
                // 配对
                if (!visited[j] && isOpenBracket(s[j])) {
                    if (isPair(s[j], s[i])) {
                        visited[i] = true;
                        visited[j] = true;
                        break;
                    } else {
                        return false;
                    }
                }
            }
        }

        // 可能出现全部遍历完但是没有一个闭括号的情况，所以需要检测下是否都为true
        bool allVisited = std::all_of(visited.begin(), visited.end(),
                                      [](bool v) { return v; });

        return allVisited;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
