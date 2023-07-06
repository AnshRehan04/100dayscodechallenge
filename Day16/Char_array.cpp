// To Print Length Of Char Array.
#include <iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for (int i = 0;name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter Your name ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    cout<<"Length of the array is "<<getlength(name)<<endl;
}