#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements ";
    cin>>n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);   //For input.
    }
    for(auto &p:v){
        cout<<p<<" ";   //To Print Output.
    }
}