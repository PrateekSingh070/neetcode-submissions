class Solution {
public:
    int trap(vector<int>& hei) {
        int n=hei.size();
        vector<int>l(n,0),r(n,0);
        int t1=0,t2=0;
        for(int i=0;i<n;i++){
           t1=max(t1,hei[i]);
            l[i]=t1;
           t2=max(t2,hei[n-1-i]);
            r[n-1-i]=t2;
           
        }
            int temp=0;
        int ans=0;
        for(int i=1;i<n-1;i++){
           
                    ans+=(min(l[i],r[i])-hei[i]);
                
            }
                return ans;
    }
};
