class Solution {
public:
    int findLucky(vector<int>& arr) {
        int i, lucky_number=-1;
        sort(arr.begin(), arr.end());
        for(i=arr.size()-1 ; i>=0 ; i--)
        {
            if(arr[i]==count(arr.begin(), arr.end(), arr[i]))
            {
                lucky_number = arr[i];
                return lucky_number;
            }
        }
        return lucky_number;
    }
};