class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m>n)return "";
 unordered_map<char,int>st;
 for(char c:t)
 st[c]++;
 int count =m;
int l=0,start=0;
int ans=INT_MAX,r=0,tl=0,tr=0;
       for(int i=0;i<n;i++){
    
          if (st[s[i]] > 0)
    count--;

st[s[i]]--;
        
        while(count==0){
               if(ans>i-l+1){
                r=i;
                ans=r-l+1;
                start=l;
               }
                st[s[l]]++;
                if(st[s[l]]>0)
                count++;
                l++;

               
        }
       }
if(ans == INT_MAX)
    return "";

return s.substr(start, ans);

    }
};
