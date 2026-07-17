class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         stack<pair<int,int>>st;
         int n=heights.size();
         int ans=0;
         for(int i=0;i<=n;i++){
            int cur=(i==n)?0:heights[i];
            while(!st.empty()&&st.top().first>=cur){
                int r=i;
                        if(!st.empty()){
            int temp=st.top().first;
            st.pop();
            int l = st.empty() ? -1 : st.top().second;
            ans=max(ans,(r-l-1)*temp); 
            }
            }
       st.push({cur,i});
         }return ans;
    }
};
