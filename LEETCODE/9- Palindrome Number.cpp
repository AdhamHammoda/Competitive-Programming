class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int sz=s.size();
        string s1=s.substr(0,sz/2 + (sz%2));
        string s2=s.substr(sz/2, sz/2 + (sz%2));
        reverse(s2.begin(),s2.end());
        return s1==s2;
    }
};