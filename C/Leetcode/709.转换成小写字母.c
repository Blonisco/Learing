/*
 * @lc app=leetcode.cn id=709 lang=c
 *
 * [709] 转换成小写字母
 */

// @lc code=start
char* toLowerCase(char* s) {
   int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
    }

    return s;
 
}
// @lc code=end

