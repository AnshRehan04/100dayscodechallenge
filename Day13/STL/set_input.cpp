#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(123);
    st.insert(12);
    // set<int>::iterator it=st.begin();
    // it++;
    // st.erase(123);
    if(st.count(10)){ //Count() check if the element is present or not.
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    // st.clear();//it clears the set.
    for(int it:st){
        cout<<it<<" "; //By default it sort the elements and it takes only unique elements.
    }
    
    
}