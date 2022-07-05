class Solution {
public:
    bool isPalindrome(int a, int b, string &s) {
        while(a < b) {
            if(s[a++] != s[b--]) {
                return false;
            }
        }
        return true;
    }
    
  string longestPalindrome(string s) {
        string ans = "";
        int i = 0, j = s.size() - 1;
        while(i < s.size() and s.size() - i > ans.size()) {
            if (s[i] == s[j]) {
                if (isPalindrome(i, j, s)) {
                    if (ans.size() < (j - i) + 1) {
                        ans = s.substr(i, j - i + 1);
                    }
                    i++;
                    j = s.size() - 1;
                }
                else {
                    if (j - i + 1 > ans.size()) {
                        j--;
                    }
                    else {
                        i++;
                        j = s.size() - 1;
                    }
                }
            }
            else {
                j--;
            }
        }
        return ans;
    }
};
