
class Solution {
public:
   
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int m = 1; // Pointer for unique elements
        
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[m] = nums[i];
                m++;
            }
        }
        
        return m; // New length of the array
    }
};

        
    