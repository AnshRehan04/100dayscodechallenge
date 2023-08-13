class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        int n=heights.size();
        vector <int> ans;
        ans=heights;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=ans[i]){
                count++;
            }
        }
        return count;
    }
};