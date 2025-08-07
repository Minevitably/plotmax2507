#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>


using namespace std;

class Solution {
private:
    char toChar(int value) {
        if (value == 0) {
            return '0';
        } else {
            return '1';
        }
    }
    int toInt(char ch) {
        if (ch == '0') {
            return 0;
        } else {
            return 1;
        }
    }
public:
    string addBinary(string a, string b) {
        // assume a.length > b.length
        if (a.length() < b.length()) {
            string temp = a;
            a = b;
            b = temp;
        }
        string result;
        int carry = 0;
        for (int i = 0; i < a.length(); i++) {
            int ai = a.length() - i - 1;
            int bi = b.length() - i - 1;
            int av = 0;
            int bv = 0;
            int cv = 0;

            if (bi >= 0) {
                av = toInt(a[ai]);
                bv = toInt(b[bi]);
            } else {
                av = toInt(a[ai]);
                bv = 0;
            }
            cv = av + bv + carry;
            if (cv > 1) {
                carry = 1;
            } else {
                carry = 0;
            }
            cv %= 2;
            result.insert(result.begin(), toChar(cv));

        }

        if (carry > 0) {
            result.insert(result.begin(), toChar(carry));
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    (new Solution())->addBinary("100", "110010");
    return 0;
}
