// Merge Sorted Array

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = 0, r = 0;
        if (m == 0) {
            nums1 = nums2;
            return;
        }
        if (n == 0) return;
        while (l < m + n) {
            if (r == nums2.size()) return;
            if (nums2[r] < nums1[l] || (r < n && l >= m)) {
                nums1.insert(nums1.begin() + l, nums2[r]);
                nums1.pop_back();
                l++; r++; m++;
            } else l++;
        }
    }
};

int main() {
    Solution solve;
    vector<int> one = { 1, 0, 0 };
    vector<int> two = { 2, 3 };
    solve.merge(one, one.size() - two.size(), two, two.size());
    for (int n : one) cout << n << ", ";
    cout << endl;
}
