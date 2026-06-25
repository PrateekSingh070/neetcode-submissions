class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int n=num.size();
        int i=0,j=n-1;
        while(num[i]+num[j]!=tar&&i<j){
            if(num[i]+num[j]>tar){
                j--;
            }
            else
            i++;
        }
        vector<int>ans;
        ans.push_back(i+1);
        ans.push_back(j+1);
        return ans;
    }
};
