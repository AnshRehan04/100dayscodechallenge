#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(12);
    dq.push_back(13);
    cout<<dq.at(0)<<endl;
    for(auto it:dq){
        cout<<it<<" ";
    }
}