class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int , int>mp;
        vector<int> ans;
        for(auto &p:nums){
            mp[p]++;
        }

         //fre , val
        priority_queue<pair<int , int>>pq;
        for(auto &p:mp){
            pq.push({p.second , p.first});
        }


        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return ans;
        
    }
};
