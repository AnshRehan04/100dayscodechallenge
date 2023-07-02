#include <iostream>
#include <array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2 index "<<a.at(2)<<endl;  // 3
    cout<<"Empty or Not "<<a.empty()<<endl;  //Returns Boolean value.

    cout<<"First Element "<<a.front()<<endl;  //Returns First Element of the Array.
    cout<<"Last Element "<<a.back();  //Returns Last Element of the Aray.
}