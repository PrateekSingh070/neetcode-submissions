class Solution {
public:
    int carFleet(int tar, vector<int>& pos, vector<int>& speed) {
        vector<pair<int,int>>st;
        int n=pos.size();
        for(int i=0;i<n;i++){
            st.push_back({pos[i],speed[i]});
        }
        sort(st.rbegin(),st.rend());
        int c=1;
        double temp=(1.0*tar-st[0].first)/st[0].second;
        for(int i=0;i<n;i++){
            double p=(1.0*tar-st[i].first)/st[i].second;
           if(p<=temp)continue;
           else{
            c++;
            temp=p;
           }
        }
        return c;
    }
};
