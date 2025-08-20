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
        int count = 1;
        for (auto v: nums) {
            if (v == val) {
                count++;
            }
        }

        return INT_MIN;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
