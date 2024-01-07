// Roman to Integer

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s)
    {
        int res = 0, val, var = singleRomanToInt(s[0]);
        for (int i = 0; i < s.size(); i++) {
            val = var;
            var = singleRomanToInt(s[i+1]);
            if (val < var) res -= val;
            else res += val;
        }
        return res;
    }
protected:
    inline int singleRomanToInt(const char &c) const
    {
        switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
};

int main() {
    Solution solve;
    int res = solve.romanToInt("VI");
    cout << res << endl;
}
