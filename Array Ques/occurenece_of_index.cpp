// TO check How many times an element occurs
#include <iostream>
using namespace std;
int occurenece(int arr[],int n,int key){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            ans++;
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
    int key;
    cout<<"Which Element to search ";
    cin>>key;
    cout<<"It occurs "<<occurenece(arr,n,key)<<" times";
}