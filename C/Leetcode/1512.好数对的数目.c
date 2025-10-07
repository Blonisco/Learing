int numIdenticalPairs(int* nums, int numsSize) {
    int result = 0;
    int cnt[101] = {[0] = 0};

    for (int i = numsSize - 1; i >= 0; i--) {
        result += cnt[nums[i]];
        cnt[nums[i]]++;
    }
    return result;
}