// Two Sum

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen = { { nums[0], 0} };
        for (int i = 1; i < nums.size(); i++) {
            if (seen.find(target - nums[i]) != seen.end()) {
                vector<int> s; s.push_back(i); s.push_back(seen[target - nums[i]]);
                return s;
            }
            else seen.insert({ nums[i], i });
        }
        return nums;
    }
};

int main() {
    Solution solve;
    vector<int> nums = { -3, 4, 3, 90 };
    vector<int> s = solve.twoSum(nums, 0);
    cout << s[0] << ", " << s[1] << endl;
}
