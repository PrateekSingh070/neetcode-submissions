class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int>need(26,0),window(26,0);
        int n=s1.size(),m=s2.size();
        if(m<n)return false;
        for(int i=0;i<n;i++){
                need[s1[i]-'a']++;
                window[s2[i]-'a']++;

        }
        int l=0;
        if(window==need)return true;
        for(int i=n;i<m;i++){
            window[s2[i]-'a']++;
            window[s2[l]-'a']--;
            l++;
            if(window==need)return true;
        }
        return false;
    }
};