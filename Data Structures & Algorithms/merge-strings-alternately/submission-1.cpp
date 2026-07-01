class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();

        int i=0;
        int j=0;
        string ans="";
        while(i<n && j<m){
          ans+=word1[i];
          i++;
          ans+=word2[j];
          j++;

        }
        if(i==n) ans+=word2.substr(j,m-1);
        else ans+=word1.substr(i,n-1);

        return ans;
    }
};