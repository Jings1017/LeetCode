class Solution {
public:
    void search(vector<int>& nums,int index, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = index;i<nums.size();i++) {
          swap(nums[index],nums[i]);
          search(nums,index+1,result);
          swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        search(nums,0,result);
        return result;
    }
};
