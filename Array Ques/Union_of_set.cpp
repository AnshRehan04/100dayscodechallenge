// To Find out the Union of the Set
#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> unionarray(int a[],int b[],int n, int m){
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        st.insert(b[j]);
    }
    vector <int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    int a[20];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b[20];
    int m;
    cout<<"Enter the size ";
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    vector<int> temp=unionarray(a,b,n,m);
    cout<<"Union of a & b is "<<endl;
    for(auto ls:temp){
        cout<<ls<<" ";
    }
}