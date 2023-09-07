class Solution {
public:
    void reverseString(vector<char>& s) {
        // return reverse(s.begin(),s.end());
    //     int st=0;
    //     int e=s.size()-1;
    //     while(st<=e){
    //         swap(s[st],s[e]);
    //         st++;
    //         e--;
    //     }
    //     // return s;
    // }

    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        st.push(ch);
    }

    s.clear();
    while(!st.empty()){
        char ch=st.top();
        s.push_back(ch);
        st.pop();
    }
    }
};