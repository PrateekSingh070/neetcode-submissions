class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>st(1000,-1);

        int n=s.size();
        if(n==1)return 1;
        int i=0;
        int ans=0,count=0;
        while(i<n){
            if(st[s[i]]==-1){
                st[s[i]]=i;
                count++;
                i++;
            }
            else{
                i=st[s[i]] + 1;
                fill(st.begin(), st.end(), -1);
                ans=max(count,ans);
                count =0;
            }
        }
        ans=max(count,ans);
        return ans;
    }
};