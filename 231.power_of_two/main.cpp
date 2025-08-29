#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 0) {
            return false;
        }
        for (int i = 0; i < 31; i++) {
            int v = pow(2, i);
            if (v == n) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    (new Solution())->isPowerOfTwo(-16);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
