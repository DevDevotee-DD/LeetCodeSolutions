// ==========================================================
// 2149. Rearrange Array Elements by Sign
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 7 ms (Beats 56%)
// Memory     : 128.2 MB (Beats 77%)
// Link       : https://leetcode.com/problems/rearrange-array-elements-by-sign/
// ==========================================================

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos = 0,neg = 1;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                a[pos] = nums[i];
                pos += 2;
            }else{
                a[neg] = nums[i];
                neg += 2;
            }
        }
        return a;
    }
};