class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> t;
        funct(candidates,target,t,0,0,n);
        return res;
    }
    void funct(vector<int>& vec,int target, vector<int>& t, int curr, int pos, int n)
    {
        if(curr == target)
        {
            res.push_back(t);
            return;
        }
        if(curr>target)
            return;
        for(int i=pos;i<n;i++){
            curr+= vec[i];
            t.push_back(vec[i]);
            funct(vec,target,t,curr,i,n);
            curr -= vec[i];
            t.pop_back();
        }
    }
};