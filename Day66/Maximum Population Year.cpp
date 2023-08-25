class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> v(102,0);
        for(auto x:logs){
            v[x[0]-1950]++;
            v[x[1]-1950]--;
        }
        int m=v[0],in=0;
        for(int i=1;i<v.size()-1;i++){
            v[i]+=v[i-1];
            if(v[i]>m){
                m=v[i];
                in=i;
            }
        }
        return in+1950;
    }
};