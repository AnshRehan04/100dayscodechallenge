class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int max_h=0;
        while(s<e){
            int lh=height[s];
            int eh=height[e];
            int min_h=min(lh,eh);
             max_h=max(max_h,min_h*(e-s));
             if(lh<eh){
                 s++;
             }
             else{
                 e--;
             }
        }
        return max_h;
    }
};