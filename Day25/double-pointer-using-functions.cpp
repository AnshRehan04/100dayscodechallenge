#include <iostream>
using namespace std;
void update(int **ptr2){
    // ptr2=ptr2+1;
    //Kuch Change Hoga?-->No

    // *ptr2=*ptr2+1;
    //Kuch Change Hoga -->Yes

    // **ptr2=**ptr2+1;  
    // Kuch Change Hoga-->Yes
}
int main(){
    int i=5;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    cout<<"Before "<<ptr2<<endl;
    cout<<"Before "<<ptr1<<endl;
    cout<<"Before "<<i<<endl;
    update(ptr2);
    cout<<"After "<<ptr2<<endl;
    cout<<"After "<<ptr1<<endl;
    cout<<"After "<<i<<endl;
}
