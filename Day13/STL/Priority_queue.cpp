#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int> > mini;  //This is the way to write minimum queue.

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size "<<maxi.size()<<endl;
    // To Print the elements of maxi in maximum order first.
    int n=maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";    //3 2 1 0
        maxi.pop();
    }
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    cout<<"Size "<<mini.size()<<endl;
    int m=mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";    //3 2 1 0
        mini.pop();
    }
    cout<<endl;
    cout<<"Empty or Not "<<mini.empty();  //1 as mini is empty after above operation.
}