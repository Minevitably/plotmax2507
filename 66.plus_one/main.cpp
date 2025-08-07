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
    vector<int> plusOne(vector<int>& digits) {
        int k = 1;
        for(int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + k == 10) {
                k = 1;
                digits[i] = 0;
            } else {
                digits[i] += k;
                k = 0;
            }
        }
        if (digits[0] == 0) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
