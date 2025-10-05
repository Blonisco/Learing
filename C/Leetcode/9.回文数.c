/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
bool isPalindrome(int x) {
   bool result = true;
   if(x > 0){
       int ar[100];
       int n = x;
      int num=0;
      while(n != 0){
         x++;
         ar[x]= n%10;
         n = (n-n%10)/10;
      }
      for(int n = 1;n <= x/2;n++){
            if(ar[n] != ar[x-n+1]){
               result = false;
            }
      }
      

   
}else{
   result = false;
}
return result;   
}
// @lc code=end

