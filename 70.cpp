// Climbing Stairs

#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        long p1 = 2, p2 = 1;
        for (int i = 2; i <= n; i++) {
            long t = p1;
            p1 += p2;
            p2 = t;
        }
        return p2;
    }
};

int main() {
    Solution solve;
    int r = solve.climbStairs(45);
    cout << r << endl;
}
