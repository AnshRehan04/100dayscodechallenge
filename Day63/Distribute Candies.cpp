class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end()); // Sort the candy types
        
        int uniqueCandies = 1; // At least one candy type is guaranteed
        int n = candyType.size();
        
        for (int i = 1; i < n && uniqueCandies < n / 2; ++i) {
            if (candyType[i] != candyType[i - 1]) {
                uniqueCandies++; // Count unique candy types
            }
        }
        
        return uniqueCandies;
    }
};
