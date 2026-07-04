class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)return 0;
        int i=0,j=1;
        int ans=0;
       while(j<n){
            int x=prices[i],y=prices[j];
            if(x<y){
                ans=max(ans,y-x);
            }
            
            else{
                i=j;
            }
                j++;
        }return ans;
    }
};
