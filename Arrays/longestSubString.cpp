class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
		int i = 0, ans = 0, len = 0;
		while (i < s.length() and len < s.length()) {
			if (us.find(s[i]) == us.end()) 
            { // if element not present add to the unordered-set,calculate max length
				us.insert(s[i]);
				++i;
				ans = max(ans, (i - len));
			} else {
				us.erase(s[len]); // remove elements till the repeating char got out 
				len++;
			}
		}
		return ans;
    }
};
