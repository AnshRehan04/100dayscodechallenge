vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int n=a.size();
    int max=a[n-1];
    ans.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max=a[i];
        }
        
    }
    sort(ans.begin(),ans.end());
    return ans;
    
}