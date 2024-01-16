// Merge Sorted Array

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
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
