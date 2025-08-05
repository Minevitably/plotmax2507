#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    int bs(vector<int>& nums, int target, int i, int j) {
        if (i > j) {
            return i;
        }
        int mid = (i + j) / 2;
        if (nums[mid] < target) {
            return bs(nums, target, mid + 1, j);
        } if (nums[mid] > target) {
            return bs(nums, target, i, mid - 1);
        }
        return mid;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return bs(nums, target, 0, nums.size() - 1);
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
