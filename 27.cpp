// Remove element

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int flength = 0;
        for (int i = 0; i < nums.size();) {
            if (nums[i] == val) nums.erase(nums.begin() + i);
            else { flength++; i++; }
        }
        return flength;
    }
};

int main() {
    Solution solve;
    vector vec = {1,2,2,3,4,2,3,2};
    int flen = solve.removeElement(vec, 2);
    cout << flen << endl;
    for (int n : vec) cout << n;
    cout << endl;
}
