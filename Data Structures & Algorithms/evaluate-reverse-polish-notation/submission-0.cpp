class Solution {
public:
    int evalRPN(vector<string>& tok) {
        stack<int>st;
        int n=tok.size();
        for(int i=0;i<n;i++){
            if(tok[i]=="+"||tok[i]=="-"||tok[i]=="/"||tok[i]=="*"){
                int sec=st.top();
                st.pop();
                int fir=st.top();
                st.pop();
                if(tok[i]=="+"){
                    st.push(fir+sec);
                }
                else if(tok[i]=="-"){
                    st.push(fir-sec);
                }
                else if(tok[i]=="*"){
                    st.push(fir*sec);
                }
                else if (tok[i]=="/"){
                    st.push(fir/sec);
                }
            }
            else
            st.push(stoi(tok[i]));
        }return st.top();
    }
};
