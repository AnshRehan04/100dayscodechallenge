class Solution {
public:

    int maxdigit(int nums){
        int maxi=0;
        while(nums!=0){
            maxi=max(maxi,nums%10);
            nums=nums/10;
        }
        return maxi;
    }
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(maxdigit(nums[i])==maxdigit(nums[j])){
                    ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
        
    }
};