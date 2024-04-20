#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> v;
    // int n;
    // cin>>n;  //size of vector.
    // int a;   //elements to be entered.
    // for(int i=0;i<n;i++){
    //     cin>>a;
    //     v.push_back(a);
    // }
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"Capacity is ";
    // cout<<v.capacity();
    // cout<<"Size"<<v.size();
    // cout<<"Element at 1st index"<<v.at(1);
    // cout<<"Front "<<v.front();
    // cout<<"Last "<<v.back();

    // vector<int> v={1,2,3};
    // vector<int> v1={1,2,3};
    // vector<int> v3;
    // for (int i = 0; i <v.size(); i++)
    // {
    //     for (int j = 0;  j<v1.size(); j++)
    //     {
    //         if(i==j){
    //             v3.push_back(v[i]+v1[j]);
    //         }
    //     }
    // }
    // for(auto it:v3){
    //     cout<<it<<" ";
    vector<int> a;
    a.push_back(1);
    a.push_back(13);
    a.push_back(12);
    // a.pop_back();
    cout<<a.size()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.back()<<endl;
    cout<<a.front()<<endl;
    for(int i:a){
        cout<<i<<" ";
    }

}