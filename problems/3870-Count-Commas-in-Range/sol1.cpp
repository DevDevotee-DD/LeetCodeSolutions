// ==========================================================
// 3870. Count Commas in Range
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.6 MB (Beats 51%)
// Link       : https://leetcode.com/problems/count-commas-in-range/
// ==========================================================

class Solution {
public:
    int countCommas(int n) {
        if ((n-999)<=0){
            return 0;
        }
        else{
            return (n-999);
        }
    }
};