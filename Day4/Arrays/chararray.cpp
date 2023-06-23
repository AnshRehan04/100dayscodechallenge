#include <iostream>
using namespace std;
int main(){
    char ch[4]={'a','b','c','d'};  //initialising an array
    // cout<<"Value at 0 index:"<<ch[0]<<endl;  //a
    // cout<<"Value at 3 index:"<<ch[3]<<endl;  //d

    // Printing the Whole Array
    int n=4;  //Size of an Array
    for (int i = 0; i <n; i++)
    {
        cout<<ch[i]<<" ";
    }
}