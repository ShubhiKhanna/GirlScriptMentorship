// https://leetcode.com/problems/spiral-matrix/submissions/
// https://www.youtube.com/watch?v=1ZGJzvkcLsA&list=WL&index=12&t=150s

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
        if(matrix.size() == 0) return ans;
    int top,bottom,L,R,dir;
    top = 0;
    bottom=matrix.size()-1;
    L=0;
    R=matrix[0].size()-1;
    dir=0;
    int i;

    while(top <= bottom && L<=R)
    {
        if(dir==0)
        {
            for(i=L; i<=R; i++)
                ans.push_back(matrix[top][i]);
            top++;
        }
        else if(dir==1)
        {
            for(i=top; i<=bottom; i++)
                ans.push_back(matrix[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R; i>=L; i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
        }
        else if(dir==3)
        {
            for(i=bottom; i>=top; i--)
                ans.push_back(matrix[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
}

};
