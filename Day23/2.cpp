#include <iostream>
using namespace std;
int product(int arr[],int n){
    int pro=1;
    int i=0;
    for (int i = 0; i < n; i++)
    {
        pro=pro*arr[i+1];
        arr[i]=pro;
    }
    return arr[i];
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<< product(arr,5);
}