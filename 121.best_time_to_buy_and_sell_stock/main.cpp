#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy_price = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy_price) {
                buy_price = prices[i];
            }
            profit = max(profit, prices[i] - buy_price);
        }
        return profit;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
