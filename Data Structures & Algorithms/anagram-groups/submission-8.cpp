class Solution {
public:
    bool isAnagram(string a , string b){
        if(a.size()!=b.size()) return false;
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) return false;
        }
       
      return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        
        

        for(int i=0;i<n;i++){
            vector<string>v;
           
            if(strs[i]==".") continue;
            v.push_back(strs[i]);
            if(i==n-1){
                  ans.push_back(v);
                  break;
            }
            for(int j=i+1;j<n;j++){
                if(isAnagram(strs[i] , strs[j])) {
                  
                  v.push_back(strs[j]);
                  strs[j]=".";
                }
                if(strs[j]==".") continue;
                

            }
            if(v.size()>=1){
                 ans.push_back(v);
                 v.clear();
            }

        }
      return ans;
    }
};
