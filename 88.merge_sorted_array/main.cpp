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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m + n - 1;
        int i1 = m - 1;
        int i2 = n - 1;
        while (i1 >= 0 && i2 >= 0) {
            if (nums1[i1] > nums2[i2]) {
                nums1[k] = nums1[i1];
                i1--;
            } else {
                nums1[k] = nums2[i2];
                i2--;
            }
            k--;
        }
        if (i1 >= 0) {
            // nums2 was placed to right position
            // process the rest of nums1
            // do nothing
            return;
        }
        while (i2 >= 0) {
            // nums1 was placed to right position
            // process the rest of nums2
            nums1[k] = nums2[i2];
            k--;
            i2--;
        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
