// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.
// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

#include <iostream>
using namespace std;
void runsum(int arr[],int size){
    int sum=0;
    int i=0;
    for ( i = 0; i < size; i++)
    {
        sum+=arr[i];
        arr[i]=sum;
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    runsum(arr,size);
    printarray(arr,size);
}