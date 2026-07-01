class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left=0;
        int right=heights.size()-1;
        int maxVal=INT_MIN;
        while(left<right){
             int currVal=(right-left)*min(heights[left] , heights[right] );
             maxVal=max(currVal , maxVal);
             if(heights[right]<heights[left]) right--;
             else left++;

        }
        return maxVal;
        
    }
};
