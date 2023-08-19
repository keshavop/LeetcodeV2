class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0;
        int end = s.length()-1;
        while(begin < end){
            if(!isalnum(s[begin]))
                begin++;
            else if(!isalnum(s[end]))
                end--;
            else if(tolower(s[begin++]) != tolower(s[end--]))
                return false;
        }
        return true;
    }
};