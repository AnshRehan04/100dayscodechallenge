#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(int arr1[],int arr2[],int n,int m){
    vector<int> v;
    int i=0;
    int j=0;
    int ans=-1;
    while (i<n && i<m)
    {
        if (arr1[i]==arr2[j])
        {
            if (ans!=arr1[i])
            {
                v.push_back(arr1[i]);
                ans=arr1[i];
            }
        }
        else if (arr1[i]>arr2[j])
        {
            j++;
        }
        else{
            i++;
        }
        
    }
    return v;
    
}
int main(){
    int arr1[4]={2,1,3,2};
    int arr2[4]={2,3,4,5};
    intersection(arr1,arr2,4,4);

}