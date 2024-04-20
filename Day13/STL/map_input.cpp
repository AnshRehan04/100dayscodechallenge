#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> mp;
    mp[0]="Ansh";
    mp[1]="Rehan";
    mp[2]="Vedant";
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    mp.insert({3,"Handa"});
    mp.erase(2);//This will erase specify key value .
    if(mp.count(12)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}