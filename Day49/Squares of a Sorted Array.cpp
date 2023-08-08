class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int sq;
        vector<int> ans;
        for(int i=0;i<n;i++){
            sq=nums[i]*nums[i];
            ans.push_back(sq);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }