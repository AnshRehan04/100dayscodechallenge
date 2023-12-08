// To Find the unique number in an array.
#include <iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i]; 
    }
    return ans;
}
int main(){
    int arr[10]={1,2,2,2,3,3,-1};
    cout<<"Unique is "<<unique(arr,10);
}