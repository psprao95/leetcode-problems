class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> res;
        for(int i=0;i<strs.size();i++)
        {
            string t=strs[i];
            sort(t.begin(),t.end());
            m[t].push_back(strs[i]);
        }
        vector<string> o;
        for(int i=0;i<m.size();i++)
        {

            res.push_back(m[i].second);
        }
        return res;

    }
};
