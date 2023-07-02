#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(11);
    v.push_back(10);
    cout<<"Binary search "<<binary_search(v.begin(),v.end(),11)<<endl;   //1 as 11 is present.
    cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),11)-v.begin()<<endl; //2 index of 11
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),1)-v.begin()<<endl;

    int a=3;
    int b=10;
    cout<<"Max is "<<max(a,b)<<endl;

    swap(a,b);
    cout<<"A "<<a<<" "<<"B "<<b<<endl;
    
    vector<int> p={1,2,3};
    reverse(p.begin(),p.end());

    for(int i:p){
        cout<<i<<" ";
    }
}