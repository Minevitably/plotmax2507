#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    string trim(string s) {
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if (i > s.size() - 1) {
            return "";
        }

        int j = s.size() - 1;
        while (j >= 0 && s[j] == ' ') {
            j--;
        }

        if (j < 0) {
            return "";
        }

        return s.substr(i, j - i + 1);
    }
    vector<string> split(string s, char delimiter) {
        s = trim(s);
        vector<string> strs;
        // delete same delimiter
        string str;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != delimiter) {
                str.push_back(s[i]);
            } else if (str.back() != delimiter) {
                str.push_back(s[i]);
            } else {
                continue;
            }
        }

        // split
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != delimiter) {
                int j;
                for (j = i; j < str.size(); j++) {
                    if (str[j] == delimiter) {
                        break;
                    }
                }
                strs.push_back(str.substr(i, j - i));
                i = j;
            }
        }
        return strs;
    }
public:
    int lengthOfLastWord(string s) {
        vector<string> strs = split(s, ' ');
        return strs.back().length();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    (new Solution())->lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}
