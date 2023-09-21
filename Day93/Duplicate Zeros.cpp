class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        // vector<int> temp;
        // int m=temp.size();
        // for(int i=0;i<n;i++){
        //     if(m>=n){
        //         break;
        //     }
        //     if(arr[i]==0){
        //         temp.push_back(0);
        //         temp.push_back(0);
        //     }
        //     else{
        //         temp.push_back(arr[i]);
        //     }
        // }
        // temp.resize(n);
        // arr=temp;

        int i=0;
        while(i<n){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                i+=2;
            }
            else{
                i++;
            }
        }
        arr.resize(n);
    }
};