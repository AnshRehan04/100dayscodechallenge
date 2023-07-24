class Solution {
public:
        bool isvowel(char ch) {
            ch = tolower(ch);
            return ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u';
            }
    string reverseVowels(string s) {
        
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(isvowel(s[start]) && isvowel(s[end]) ){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(isvowel(s[start])==0){
                start++;
            }
            else{
                end--;
            }
        }
        return s;
    }
};