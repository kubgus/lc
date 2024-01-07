// Find the Index of the First Occurrence in a String

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = 0, sN = needle.size();
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[x]) x++;
            else {
                i -= x - 1;
                x = (haystack[i] == needle[0]) ? 1 : 0;
            }
            if (x == sN) return i - x + 1;
        }
        return -1;
    }
};

int main() {
    Solution solve;
    int i = solve.strStr("mississippi", "issip");
    cout << i << endl;
}

