// ==========================================================
// 283. Move Zeroes
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 23.8 MB (Beats 83%)
// Link       : https://leetcode.com/problems/move-zeroes/
// ==========================================================

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        for(int i = j; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }