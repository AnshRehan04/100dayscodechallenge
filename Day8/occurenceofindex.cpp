#include <iostream>
using namespace std;
int occ(int arr[],int n,int key){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            ans++;
        }
    }
    return ans;
    
}
int main(){
    int arr[6]={1,2,1,1,1,1};
    cout<<occ(arr,6,1);
}