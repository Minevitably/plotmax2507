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
    string trim(const std::string& s) {
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

    std::vector<std::string> split(const std::string& s, char delimiter) {
        string s1 = trim(s);
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(s1);
        while (std::getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
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
