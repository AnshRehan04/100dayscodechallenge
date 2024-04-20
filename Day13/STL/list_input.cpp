#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> li;
    li.push_back(12);
    li.push_front(1);
    li.push_back(2);
    li.pop_front();
    cout<<li.size()<<endl;
    cout<<li.front()<<endl;
    for(auto it:li){
        cout<<it<<" ";
    }

}