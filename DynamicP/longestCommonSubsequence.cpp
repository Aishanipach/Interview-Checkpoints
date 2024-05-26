class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size()+1, vector<int> (text2.size()+1,0));
        vector<int> prev(text2.size()+1, 0);
    vector<int> cur(text1.size()+1,0);

        for(int i=1;i<=text1.size();i++){
            for(int j =1;j<=text2.size();j++){
                if(text1[i-1]==text2[j-1])cur[j]=1+prev[j-1];
                else dp[i][j]= max(cur[j-1], prev[j]);
            }
            prev=cur;
        }
        return prev[text2.size()];
    }
};
