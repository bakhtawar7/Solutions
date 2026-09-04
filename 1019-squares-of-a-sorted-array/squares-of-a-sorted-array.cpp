class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sq(n);

        int left = 0;
        int right = n - 1;

        for(int i = n - 1; i >= 0; i--) {
            if(abs(nums[left]) > abs(nums[right])) {
                sq[i] = nums[left] * nums[left];
                left++;
            }
            else {
                sq[i] = nums[right] * nums[right];
                right--;
            }
        }

        return sq;
    }
};