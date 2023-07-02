#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("Computer ");
    s.push(" Science ");
    s.push("CSE ");
    cout<<"first Element is "<<s.front()<<endl;   //computer: as it is first to entered in queue.
    cout<<"Size "<<s.size()<<endl;;
    s.pop();  //computer will be removed as pop operations first removes first element to be entered.
    cout<<"First element after Pop "<<s.front()<<endl; //Science.
    cout<<"Size after pop is "<<s.size()<<endl;
}