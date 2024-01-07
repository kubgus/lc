// Search Insert Position

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            int num = nums[0];
            if (target > num) return 1;
            else return 0;
        }
        float spl = nums.size() / 2.0f;
        if (spl == 1) {
            if (nums[0] == target) return 0;
            else if (nums[1] == target) return 1;
            else if (nums[0] > target) return 0;
            else if (nums[1] < target) return 2;
            else return 1;
        }
        int ispl = (int)spl;
        vector spleft(nums.begin(), nums.begin() + ispl);
        vector spright(nums.begin() + ispl, nums.end()); // lmao Sprite
        if (spleft[0] == target) return 0;
        if (spleft[spleft.size() - 1] == target) return spleft.size() - 1;
        if (spright[0] == target) return spleft.size();
        if (spleft[spleft.size() - 1] > target) return searchInsert(spleft, target);
        if (spright[0] < target) return searchInsert(spright, target) + spleft.size();
        else return spleft.size();
    }
};

int main() {
    Solution solve;
    vector search = { 1, 4, 6, 7, 8, 9 };
    int index = solve.searchInsert(search, 6);
    cout << index << endl;
}
