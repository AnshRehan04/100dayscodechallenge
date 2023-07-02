#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> c(5,1);  //(5,1)-->Size :5 Initialize all elements with 1.
    for(int i:c){
        cout<<i<<" ";    //1 1 1 1 1 
    }
    cout<<"Capacity "<<v.capacity()<<endl; // 0 as No Element is there.

    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;  // 1 as  We have entered 1 element. 

    v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;  // 2

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;  //4 as vector are dynamic they change their size.

    cout<<"Size "<<v.size()<<endl; //3 as we have entered 3 elements.

    cout<<"Element at 1st index "<<v.at(1)<<endl;  //2 
    cout<<"Element at 2nd index "<<v.at(2)<<endl;  //3 
    // cout<<"Element at 3rd index "<<v.at(3);  // gives Error as it is out of range.

    cout<<"Front "<<v.front()<<endl;;  // 1   First Element
    cout<<"Back "<<v.back()<<endl;;   //  3  Last Element

    cout<<"Before Pop back"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;   //To print the vector we used this syntax.
    }
    cout<<"Size Before Pop "<<v.size()<<endl;
    v.pop_back();
    cout<<"After Pop"<<endl;
    for(int i:v){   
        cout<<i<<" "<<endl;   // Pop Function will remove Last element from vector
    }

    cout<<"Size After Pop "<<v.size()<<endl;

    // cout<<"New Vector"<<endl;
    // vector<int> a={2,3,4};
    // for(int i:a){
    //     cout<<i<<" "<<endl;
    // }
    // cout<<"Size "<<a.size()<<endl;

    vector<int> p(5,2);   //2 2 2 2 2
    vector<int> q(p);   //Element of p copies in q
    for(int i:q){
        cout<<i<<" ";
    }
}
