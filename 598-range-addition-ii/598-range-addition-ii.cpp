class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int r = m, c = n;
        int s = ops.size();
        for(int i=0; i<s; i++){
            r = min(r, ops[i][0]);
            c = min(c, ops[i][1]);
        }
        return r * c;
    }
};