// Palindrome Number

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int y = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return (x == y) || (x == y / 10);
    }
};

int main() {
    Solution solve;
    bool res = solve.isPalindrome(4);
    cout << res << endl;
}
