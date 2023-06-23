#include <iostream>
using namespace std;
bool isEven(int a){
    if (a&1)
    {
        return 0;//0-->ODD
    }
    else{
        return 1; //1-->Even
    }
}
int main(){
    int num;
    cin>>num;
    if (isEven(num))
    {
        cout<<"It is Even";
    }else{
        cout<<"It is Odd";
    }
    

}