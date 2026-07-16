class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n-k+1  ,-10000);
        int j=0;
        int i=0;
         for(i;i<k;i++){
            ans[0]=max(ans[0],nums[i]);
        }
        int slw=0;
        
        while(i<n&&j<n&&slw<n){
                if(ans[slw]<nums[i]){
                    slw++;
                    if(slw<n){
                    ans[slw]=nums[i];
                    }
                    else return ans;
                }
                else if(ans[slw]>nums[j])
                {
                    slw++;
                    ans[slw]=ans[slw-1];
                }
                else{
                    slw++;
                    for(int p=j+1;p<=i;p++){
                        ans[slw]=max(ans[slw],nums[p]);
                    }
                }

                    j++;
                    i++;

        }return ans;
    }
};
