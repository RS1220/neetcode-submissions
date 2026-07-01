class Solution {
public:
    void rotate(vector<int>& nums, int i , int j){
        while(i<=j){
            swap(nums[i] , nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rotate(nums , n-k , n-1);
        rotate(nums , 0 , n-k-1);
        
        rotate(nums , 0 , n-1);
        return ;

    }
};