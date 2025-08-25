#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
private:
    int getBaseSquareSum(int val) {
        int sum = 0;
        while (val > 0) {
            int base = val % 10;
            sum += base * base;
            val /= 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        map<int, bool> map;
        const int origin_n = n;
        while (n != 1) {
            n = getBaseSquareSum(n);
            if (n == origin_n || n == 0 || map[n]) {
                return false;
            }
            map[n] = true;
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
