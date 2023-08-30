class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if(money < prices[0] + prices[1]
        ) {
            return money;
        }
        return (money - prices[0] - prices[1]);
    }
};