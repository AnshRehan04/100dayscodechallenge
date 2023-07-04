// Reverse of an Array using vector.
// #include <iostream>
// #include <vector>
// using namespace std;
// vector <int> reverse(vector<int> v){
//     int s=0;
//     int e=v.size()-1;
//     while (s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void print(vector<int> v){
//     for (int i = 0; i <v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
    
//     vector<int> ans=reverse(v);
//     cout<<"Reverse of array is ";
//     print(ans);
// }

// Reverse an Array from specific Position.
#include <iostream>
#include <vector>
using namespace std;
vector <int> reverse(vector<int> v,int m){
    int s=m+1;
    int e=v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int m;
    cout<<"Position of element ";
    cin>>m;
    
    vector<int> ans=reverse(v,m);
    cout<<"Reverse of array is ";
    print(ans);
}