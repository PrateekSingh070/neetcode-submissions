class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<pair<int,int>>st;
        st.push({temp[0],0});
        vector<int>ans(n,0);
        int j=0;
        for(int i=1;i<n;i++){

            while(!st.empty()&&st.top().first<temp[i]){
                ans[st.top().second]=i-st.top().second;
                
                st.pop();
            }
                st.push({temp[i],i});
        }
                return ans;
    }
};
