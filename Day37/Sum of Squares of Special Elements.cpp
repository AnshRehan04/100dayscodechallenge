class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()%(i+1)==0){
                int square=nums[i]*nums[i];
                sum=sum+square;
            }
        }
        return sum;
    }
};