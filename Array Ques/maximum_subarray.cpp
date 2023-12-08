#include <iostream>
using namespace std;
int maxsum(int arr[],int n){
    int sum=0;
    int maxi=arr[0];
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
        maxi=max(maxi,sum);
        if (sum<0)
        {
            sum=0;
        }
    }
    return maxi;
    
}
int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    cout<<"Maximum sum is "<<maxsum(arr,9);
}