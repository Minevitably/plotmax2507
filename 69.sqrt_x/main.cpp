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
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        int i = 0;
        int j = x;
        int mid;
        while (i <= j) {
            mid = (i + j) / 2;
            // stack overflow
            // x / mid = val, mid != 0
            int val = x / mid;
            // if mid^2 < x && x < (mid + 1)^2, then mid is the res

            if (val < mid) { // mid*mid > x, x/mid < mid, val < mid
                j = mid - 1;
            } else if (val > mid) { // mid*mid < x, x/mid > mid, val > mid
                if (x / (mid + 1) < mid + 1) {
                    return mid;
                }
                i = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    (new Solution())->mySqrt(3);
    return 0;
}
