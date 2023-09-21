// 2574 Leetcode
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++){
            rsum=rsum+nums[i];
        }
        for(int i=0;i<n;i++){
            rsum=rsum-nums[i];
            ans.push_back(abs(lsum-rsum));
            lsum=lsum+nums[i];
        }
        return ans;
    }
};
