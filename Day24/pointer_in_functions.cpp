#include <iostream>
using namespace std;
int print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){
    // cout<<"Before ";
    // cout<<p<<endl;
    // p=p+1;
    // cout<<"After ";
    // cout<<p<<endl;
    *p=*p+1;

}
int main(){
    int num=5;
    int *p=&num;
    cout<<"Before "<<*p<<endl;  //5
    // print(p);   //Address will be printed.
    update(p);
    cout<<"After "<<*p<<endl;   //6
}