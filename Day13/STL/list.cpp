#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    for(int i:li){
        cout<<i<<" ";
    }
    cout<<endl;
    int size=li.size();
    cout<<"Size of list "<<size<<endl;

    cout<<"List after Pop "<<endl;
    li.pop_back();
    li.pop_front();
    for(int i:li){
        cout<<i<<" ";
    }
    // cout<<endl;
    // list<int> l={1,2,3,4,5};
    // l.erase(l.begin());
    // cout<<"List after erase ";
    // for(int i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // list<int> last(l);
    // for(int i:last){
    //     cout<<i<<" ";  //elements of list l copies into list last.
    // }
    
}