class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
    int n=arr.size();
    if(n<3)
        return false;

    int count=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]<arr[i-1]&&arr[i]<arr[i+1] || arr[i]==arr[i-1])
            return false;
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1] )
            count++;
    }
    if(count!=1)
        return false;
    return true;

    }
};