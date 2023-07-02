#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int,string> m;
    // To insert value into the map.
    m[1]="computer";  //1-->key computer-->Value
    m[12]="Science";
    m[2]="Cse";

    // To Print the keys of map.
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;;    //1 2 12 It is always print out in sorted order.
        // i.second is used to print the value inside it.
    }

    // Other Way to insert Element into the map.
    m.insert({4,"Hello"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;;    //1 2  4 12 It is always print out in sorted order.
        // i.second is used to print the value inside it. 
    }

    // TO check wheather this element is present or not.
    cout<<"Findind 13 or not"<<m.count(13)<<endl;   //0--> as 13 is Not present.

    // To check wheather it is empty or not.
    cout<<"Empty or Not "<<m.empty()<<endl;  //0-->Not empty. 

    m.erase(1);            //1 and its value computer will be erased.
    cout<<"After erase "<<endl;
    for(auto i:m){
        cout<<i.first<<i.second<<" "<<endl;;
    }
}