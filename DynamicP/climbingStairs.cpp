
// To get different ways in which you can climb the stairs:
// from the top, you can either f(n-1) OR f(n-2)
// {ans = f(n-1) +f(n-2) return ans;} 
// This is indeed fibonacci sequence question

class Solution {
public:
    int climbStairs(int n) {
        int prev=1;
        int prev2=1;

        for(int i=2;i<=n;i++){
            int cur= prev2+prev;
            prev=prev2;
            prev2=cur;
        }
        return prev2;
    }
};
