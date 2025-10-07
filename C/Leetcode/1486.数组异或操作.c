/*
 * @lc app=leetcode.cn id=1486 lang=c
 *
 * [1486] 数组异或操作
 */

// @lc code=start
int xorOperation(int n, int start) {
    int result=start;

    for(int i = 1; i<= n-1; i++){
        result = result^(start + 2*i);
    }
    return result;
}
// @lc code=end

