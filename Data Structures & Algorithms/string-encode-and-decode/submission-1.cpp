class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            ans+=to_string(strs[i].size())+"#"+strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
    vector<string> result;
    int i = 0;

    while (i < s.size()) {
        int j = i;

        // Step 1: read digits until '#'
        while (s[j] != '#')
            j++;

        int len = stoi(s.substr(i, j - i)); // length of the string

        // Step 2: extract the string
        string str = s.substr(j + 1, len);
        result.push_back(str);

        // Step 3: move i to next encoded segment
        i = j + 1 + len;
    }

    return result;
}

};
