class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,int> st, pt;
            for(int j=0;j<9;j++){
                if(board[i][j] != '.') {
                    if(st[board[i][j]]>0) return false;
                    else st[board[i][j]]++;
                }
                if(board[j][i] != '.') {
                    if(pt[board[j][i]]>0) return false;
                    else pt[board[j][i]]++;
                }
            }
        }
        for(int r=0; r<9; r+=3) {
            for(int c=0; c<9; c+=3) {
                unordered_map<char,int> box;
                for(int i=0; i<3; i++) {
                    for(int j=0; j<3; j++) {
                        char curr = board[r+i][c+j];
                        if(curr != '.') {
                            if(box[curr]>0) return false;
                            else box[curr]++;
                        }
                    }
                }
            }
        }
        return true;
    }
};