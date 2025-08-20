#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

class Solution {
private:
    /**
     * 'A' -> 1
     * 'B' -> 2
     * 'Z' -> 26
     * @param ch
     * @return
     */
    int alphaToNum(char ch) {
        return (int)(ch - 'A' + 1);
    }
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            char ch = columnTitle[columnTitle.size() - i - 1];
            sum += alphaToNum(ch) * (int)(pow(26, i));
        }
        return sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
