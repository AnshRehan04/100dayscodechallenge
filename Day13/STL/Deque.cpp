#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";  //2,1
    }
    cout<<endl;
    
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" "<<endl;   //2
    // }

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";   //1
    // }
    cout<<"First index element -->"<<d.at(1)<<endl;;  //1 
    cout<<"zeroth index element -->"<<d.at(0)<<endl;;  //2

    cout<<endl;
    cout<<"Front "<<d.front()<<endl;  //2
    cout<<"Back "<<d.back()<<endl;  //1
    cout<<"Empty Or Not "<<d.empty()<<endl; //0
    cout<<"Size before Erasing "<<d.size()<<endl; //2

    d.erase(d.begin(),d.begin()+1);
    cout<<"Size After erasing "<<d.size();
    cout<<endl;
    cout<<"deque elements ";
    for(int i:d){
        cout<<i<<" ";  //1
    }

}
