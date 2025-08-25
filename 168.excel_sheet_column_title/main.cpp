#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

class Solution {
private:
    char getAlpha(int n) {
        if (n == 0) {
            return 'Z';
        }
        return n - 1 + 'A';
    }
public:
    string convertToTitle(int columnNumber) {
        string res;
        while (columnNumber > 0) {
            char ch = getAlpha(columnNumber % 26);
            res.push_back(ch);
            columnNumber--;
            columnNumber /= 26;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    (new Solution())->convertToTitle(28);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
