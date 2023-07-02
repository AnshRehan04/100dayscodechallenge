#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;  //size of vector.
    int a;   //elements to be entered.
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}