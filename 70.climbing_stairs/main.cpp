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
    int climbStairs(int n) {
        int f0 = 1;
        int f1 = 1;
        int fn = 1; // return 1 when n == 1
        // Fibonacci loop version
        for (int i = 0; i < n - 1; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        return fn;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
