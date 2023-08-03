class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int e=nums.size()-1;
        if(nums.size()>2){
            int mid=(s+e)/2;
            return nums[mid];
        }
        return -1;
    }
};