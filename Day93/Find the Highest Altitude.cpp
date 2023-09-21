class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxaltitude=0;
        int currentaltitude=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            currentaltitude=currentaltitude+gain[i];
            maxaltitude=max(maxaltitude,currentaltitude);
        }
        return maxaltitude;
    }
};