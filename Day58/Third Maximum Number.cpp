class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN;    // Initialize with smallest possible value
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;
        
        for (int num : nums) {
            if (num > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            } else if (num > secondMax && num < firstMax) {
                thirdMax = secondMax;
                secondMax = num;
            } else if (num > thirdMax && num < secondMax) {
                thirdMax = num;
            }
        }
        
        if (thirdMax != LLONG_MIN) {
            return static_cast<int>(thirdMax);
        } else {
            return static_cast<int>(firstMax);
        }
    }
};
