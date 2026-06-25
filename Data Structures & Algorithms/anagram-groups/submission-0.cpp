class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>st;
        for(auto it:strs){
            string s=it;
            sort(s.begin(),s.end());
            st[s].push_back(it);
        }
        vector<vector<string>>ans;
        for(auto it:st){
            ans.push_back(it.second);
        }
        return ans;
    }
};
