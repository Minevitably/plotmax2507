#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


class Solution {
private:
    int getBit(int i, int *n) {
        return ((*n) >> i) & 1;
    }
    void setBit(int i, int val, int *n) {
        if (val == 0) {
            (*n) &= ~(1 << i);
        } else {
            (*n) |= (1 << i);
        }
    }

    void swapBit(int i, int j, int *n) {
        int temp = getBit(i, n);
        setBit(i, getBit(j, n), n);
        setBit(j, temp, n);
    }
public:

    int reverseBits(int n) {
        int len = 32;
        for (int i = 0; i < len / 2; i++) {
            swapBit(i, len - 1 - i, &n);
        }
        return n;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
