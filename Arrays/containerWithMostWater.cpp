class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right= height.size()-1;
        int currMaxArea=(right-left)*min(height[left], height[right]);
        int maxArea=currMaxArea;
       while(left<right){
            if(height[left]<height[right]) left++;
            else right--;
            if(left<right){
            currMaxArea=(right-left)*min(height[left], height[right]);
            maxArea= max(currMaxArea, maxArea);}
        }
        return maxArea;
    }
};
