#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
private:
    int addAllDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
public:
    int addDigits(int num) {
        while (num > 9) {
            num = addAllDigits(num);
        }
        return num;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
