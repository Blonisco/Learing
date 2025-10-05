bool isPalindrome(int x) {
    if (x < 0 || x > 0 && x % 10 == 0) {
        return false;
    }//确定x是不是负数，并且检查x是不是末尾为零的正数。
    int rev = 0;
    while (rev < x / 10) {//取数的一半，1221则取12，12321则取12
        rev = rev * 10 + x % 10;//翻转
        x /= 10;
    }
    return rev == x || rev == x / 10;//偶位数前者，奇位数后者。
}