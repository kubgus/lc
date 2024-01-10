// Happy Number

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        do {
            seen.insert(n);
            int i = 0;
            while (n != 0) {
                i += (n%10) * (n%10);
                n /= 10;
            }
            n = i;
            if (n == 1 || n == 7) return true;
        } while (seen.find(n) == seen.end());
        return false;
    }
};

int main() {
    Solution solve;
    bool a = solve.isHappy(19);
    cout << a << endl;
}
