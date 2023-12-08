// TO Given Out the pair whose sum is equal to Targeted Sum.
#include <iostream>
using namespace std;
int pairsum(int arr[],int n,int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                return i,j;
            }
        }
    }
    return -1;
    
}
int main(){
    int arr[20];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the sum ";
    cin>>sum;
    cout<<"The Pair is "<<pairsum(arr,n,sum);
}