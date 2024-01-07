// Length of Last Word

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int x = 0;
        bool w = true;
        for (int i = s.size() - 1; i >= 0 && (s[i] != ' ' || w); i--) {
            if (s[i] != ' ') w = false;
            if (!w) x++;
        }
        return x;
    }
};

int main() {
    Solution solve;
    int r = solve.lengthOfLastWord("hello there I'm Jacob!");
    cout << r << endl;
}
