// To find the max and min element in an Array.
#include <iostream> 
#include <limits.h>
using namespace std;
int max(int arr[],int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[10]={10,20,-1,400};
    cout<<"Max element is :"<<max(arr,10)<<endl;;
    cout<<"Min element is :"<<min(arr,10);
}