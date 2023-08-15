class Solution {
public:
    char findTheDifference(string s, string t) {
        char n=0;
        for(char cs:s)
        {
            n=n^cs;
        }
        for(char ct:t)
        {
            n=n^ct;
        }
        return n;
    }
};