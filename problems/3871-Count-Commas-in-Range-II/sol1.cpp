// ==========================================================
// 3871. Count Commas in Range II
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 9.1 MB (Beats 51%)
// Link       : https://leetcode.com/problems/count-commas-in-range-ii/
// ==========================================================

class Solution {
public:
    long long countCommas(long long n) {
      long long ans = 0;
long long p = 1000;

while (p <= n) {
    ans += n - p + 1;
    p *= 1000;
   
}
return ans;

    }
};