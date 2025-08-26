#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> existMap;
        for (auto v: nums) {
            if (existMap.count(v) == 0) {
                existMap[v] = true;
            } else {
                return true;
            }
        }
        return false;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
