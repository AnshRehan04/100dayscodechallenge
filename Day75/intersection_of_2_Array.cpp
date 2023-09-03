#include <iostream>
#include <vector>
using namespace std;
vector <int> intersection(int arr[],int arr1[],int n,int m){
    int i,j=0;
    vector<int> v;
    int ans=-1;
    while (i<n && j<m)
    {
        if (arr[i]==arr1[j])
        {
            if (ans!=arr[i])
            {
                v.push_back(arr[i]);
                ans=arr[i];
            }
            i++;
            j++;
        }
        else if (arr[i]>arr1[j])
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
    int arr[10];
    int arr1[10];
    int n;
    int m;
    cout<<"Enter size of 1st array";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter size of 2nd array";
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    intersection(arr,arr1,n,m);
    
}