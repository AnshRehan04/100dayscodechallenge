// Day96
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum = 0;            //Current Sum
        int left = 0;           //left ptr
        int right = 0;          //right ptr
        int shortest = INT_MAX; //shortest window with Sum>=Target
        
        //Variable Size sliding window: 2-pointer
        while(right<n){
            sum += nums[right];//Add current element to Sum
            
            if(sum >= target){//Check if currentSum >= Target
                //Skip all left elements till sum < target (to find the smallest window)
                while(sum>=target){
                    sum -= nums[left];
                    left++;
                }
                shortest = min(shortest,right-left+2);//Update smallest window size
            }
            right++;
        }
        return shortest==INT_MAX?0:shortest;
    }
};
