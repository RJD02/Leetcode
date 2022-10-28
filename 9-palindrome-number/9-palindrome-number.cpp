class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        
        string s(num.begin(), num.end());
        reverse(s.begin(), s.end());
        return s == num;
    }
};