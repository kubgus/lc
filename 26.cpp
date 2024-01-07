// Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int t = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                nums[t] = nums[i];
                t++;
            }
        }
        return t;
    }
};

int main() {
    Solution solve;
    vector<int> arr = { 1, 2, 3, 3, 5, 5, 5, 6 };
    int unique = solve.removeDuplicates(arr);
    cout << unique << endl; 
    for (int c : arr)
        cout << c << ", ";
    cout << endl;
}
