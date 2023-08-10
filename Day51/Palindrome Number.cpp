class Solution {
public:
    bool isPalindrome(int x) {
        unsigned temp ,reverse=0;
        temp=x;
        while(temp>0){
            int rem=temp%10;
            reverse=reverse*10+rem;
            temp=temp/10;
        }
        return reverse==x;
    }
};