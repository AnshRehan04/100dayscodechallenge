#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(23);
    v.push_back(-10);
    cout<<"After sorting ";
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"after Reversing ";
    reverse(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Maxmimum is ";
    int a=10;
    int b=20;
    cout<<max(a,b);


}