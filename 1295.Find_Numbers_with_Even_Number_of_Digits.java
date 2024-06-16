class Solution {
    public static int getDigitCount(int number) {

        int digits = 0;
        while (number > 0) {
            number /= 10;
            digits++;
        }

        return digits;
    }

    public int findNumbers(int[] nums) {
        int ans = 0;
        for (int i = 0; i < nums.length; i++) {
            if (getDigitCount(nums[i]) % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
}