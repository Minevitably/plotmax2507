#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    int getValueFromSymbol(char first, char second) {
        if (first == 'I') {
            if (second == 'V' || second == 'X') {
                return -1;
            }
            return 1;
        } else if (first == 'V') {
            return 5;
        } else if (first == 'X') {
            if (second == 'L' || second == 'C') {
                return -10;
            }
            return 10;
        } else if (first == 'L') {
            return 50;
        } else if (first == 'C') {
            if (second == 'D' || second == 'M') {
                return -100;
            }
            return 100;
        } else if (first == 'D') {
            return 500;
        } else if (first == 'M') {
            return 1000;
        }
        return -1;
    }
public:
    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            int val = 0;
            char first = s[i];
            char second = s[i];
            if (i + 1 < s.size()) {
                second = s[i + 1];
            }
            val = getValueFromSymbol(first, second);
            result += val;
        }
        return result;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
