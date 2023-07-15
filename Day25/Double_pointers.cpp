#include <iostream>
using namespace std;
int main(){
    int i=5;
    int *ptr1=&i;
    cout<<"Address of i is "<<ptr1<<endl;

    int **ptr2=&ptr1;
    cout<<"Address of ptr1 is "<<ptr2<<endl;

    // cout<<*ptr2<<endl;
    // cout<<*ptr1<<endl;
    // cout<<ptr1<<endl;  //Address of i and ptr1 is same

    //Printing value of i.
    cout<<"Value is "<<i<<endl;
    cout<<"Value is "<<*ptr1<<endl;
    cout<<"Value is "<<**ptr2<<endl;

    /*cout<<&i<<endl;   //Address of i will be printed.
    cout<<ptr1<<endl; //Content of ptr1 which is nothing but address of i will be printed.
    cout<<*ptr2<<endl;
*/
    cout<<&ptr1<<endl;   //Address of ptr1 will be printed
    cout<<ptr2<<endl;    //content inside ptr2 will be printed
}