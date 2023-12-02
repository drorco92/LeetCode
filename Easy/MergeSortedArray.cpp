#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) {
            return;
        }
        int pos1 = 0;
        int pos2 = 0;
        while (pos1 < m + n) {
            if (pos1 < m) {
                if (nums1[pos1] <= nums2[pos2]) {
                    pos1++;
                }
                else {
                    int temp = nums1[pos1];
                    nums1[pos1] = nums2[pos2];
                    nums2[pos2] = temp;
                    pos1++;
                }
            } else {
                nums1[pos1] = nums2[pos2];
                pos1++;
                pos2++;
            }
        }
    }
};