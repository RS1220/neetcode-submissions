class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        return s.size()==n?false:true;
    }
};