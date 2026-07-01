class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string s=strs[0];
        if(n==1) return s;
        string ans="";
        string a=strs[0];
        string b=strs[1];
         int m=min(a.size() , b.size());
         for(int j=0;j<m;j++){
                if(a[j]==b[j]) ans+=a[j];
                else break;
         }

         for(int i=2;i<n;i++){
            string c=strs[i];
            int p=min(ans.size() , c.size());
            for(int j=0;j<p;j++){
                if(ans[j]!=c[j]){
                   ans=ans.substr(0,j);
                   break;
            
                } 

                
            }
            if(ans.size()>c.size()) ans=c;
            
         }
        return ans;
        
    }
};