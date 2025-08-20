#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.empty()) {
            return INT_MIN;
        }
        int val = nums[0];
        int eqCount = 0;
        int neqCount = 0;
        for (auto v: nums) {
            if (v == val) {
                eqCount++;
            } else {
                neqCount++;
            }
            if (neqCount > eqCount) {
                val = v;
                neqCount--;
                eqCount++;
            }
        }

        return val;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
