#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrage(int arr[],int n){
    vector<int> ans(n,0);
    int posindex=0;
    int negindex=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            ans[negindex]=arr[i];
            negindex=negindex+2;
        }
        else{
            ans[posindex]=arr[i];
            posindex=posindex+2;
        }
    }
    return ans;
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
    rearrage(arr,n);
}