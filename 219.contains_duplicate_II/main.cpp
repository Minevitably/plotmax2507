#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        map<int, int> existMap;
        for (int i = 0; i < nums.size(); i++) {
            int key = nums[i];
            if (existMap.count(key) > 0) {
                if (abs(existMap[key] - i) <= k) {
                    return true;
                }
            }
            existMap[key] = i;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
