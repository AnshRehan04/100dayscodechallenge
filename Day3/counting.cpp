#include <iostream>
using namespace std;
void counting(int n){
    for (int i = 1; i <=n; i++)
    {
        //function body
        cout<<i<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    //function call
    counting(n);
}