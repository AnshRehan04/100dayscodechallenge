#include <iostream>
using namespace std;
int subarray(int arr[],int n){
    int sum=0;
    int maxi=arr[0];
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if (sum<0)
        {
            sum=0;
        }
    }
    return sum;
}
int main(){
    int arr[5]={2,4,6,8,10};
    cout<<"Maximum subarray sum is "<<subarray(arr,5);

}

