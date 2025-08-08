#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>


using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        for (int i = 1; i <= x; i++) {
            if (x / i < i) {
                return i - 1;
            }
            if (x / i == i) {
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
