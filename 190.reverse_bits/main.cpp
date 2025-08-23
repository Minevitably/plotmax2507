#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


class Solution {
public:
    int reverseBits(int n) {
        int v = 0;
        for (int i = 0; i < 32; i++) {
            v |= (((n >> i) & 1) << (31 - i));
        }
        return v;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
