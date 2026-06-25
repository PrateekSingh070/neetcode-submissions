class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0, j = 1, k = n - 1;
        map<vector<int>,int>st;
        vector<vector<int>> ans;

        while (i < n - 2) {

            if (j >= k) {
                i++;
                j = i + 1;
                k = n - 1;
                continue;
            }

            int sum = nums[i] + nums[j] + nums[k];

            if (sum == 0) {
                
            vector<int>an; an.push_back(nums[i]); an.push_back(nums[k]); an.push_back(nums[j]); 
            if(st[an]==0){
                ans.push_back(an);
            st[an]++;
            }
                j++;
                k--;
            }
            else if (sum < 0) {
                j++;
            }
            else {
                k--;
            }
        }

        return ans;
    }
};