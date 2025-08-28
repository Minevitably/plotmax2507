#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
private:
    string makeRange(int min, int max) {
        ostringstream oss;
        if (min == max) {
            oss << min;
        } else {
            oss << min << "->" << max;
        }
        return oss.str();
    }
public:
    vector<string> summaryRanges(vector<int> &nums) {
        vector<string> ranges;
        if (nums.empty()) {
            return ranges;
        }
        int rangeMin = nums[0];
        int rangeMax = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (rangeMax != nums[i] - 1) {
                ranges.push_back(makeRange(rangeMin, rangeMax));
                rangeMin = nums[i];
            }
            rangeMax = nums[i];
        }
        ranges.push_back(makeRange(rangeMin, rangeMax));

        return ranges;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
