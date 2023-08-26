class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        // Find the first element from the right that is smaller than its next element
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        // If such an element is found, find the smallest element to the right of i
        // that is larger than nums[i]
        if (i >= 0) {
            int j = n - 1;
            while (j > i && nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        
        // Reverse the elements to the right of i
        reverse(nums.begin() + i + 1, nums.end());
    }
};
