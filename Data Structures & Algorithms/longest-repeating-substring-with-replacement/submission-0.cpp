class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>st;
        int n=s.size();
        int j=0,i=0;
        int mx=0,ans=0;
        while(i<n&&j<n){
            st[s[i]]++;
            mx=max(mx,st[s[i]]);
                    i++;
                if((i-j)-mx<=k){

                    ans=max(ans,i-j);
                }
                else{
                    st[s[j]]--;
                    j++;
                }

        }return ans;
    }
};
