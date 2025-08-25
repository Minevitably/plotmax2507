#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> st_map;
        map<char, char> ts_map;
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (st_map.count(s[i]) == 0) {
                // prevent a->c, b->c
                if (ts_map.count(t[i]) != 0) {
                    return false;
                }
                st_map[s[i]] = t[i];
                ts_map[t[i]] = s[i];
            } else if(st_map[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
