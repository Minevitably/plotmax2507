#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            int last = nums[k];
            if (last != nums[i]) {
                // append 1 element to result list
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
