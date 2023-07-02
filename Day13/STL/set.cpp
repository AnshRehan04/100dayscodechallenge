#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;   //Set is a collection of unique elements if there are 3 1's it consider as only 1 time.
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    for(auto i:s){
        cout<<i<<" ";   //1 2 3 4
    }
    
}