#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[10]={1,2,3,4};
    int key;
    vector <int> ans;
    for (int i = 0; i <10; i++)
    {
        if (arr[i]==key)
        {
            ans.push_back(i);
        }
    }
    cout<<ans;
}