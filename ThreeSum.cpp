class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size() < 3)
            return result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i-1]==nums[i])
                continue;
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum==0){
                    result.push_back({nums[i],nums[l],nums[r]});
                    while (l<r && nums[l+1]==nums[l])
                        l++;
                    while (l<r && nums[r-1]==nums[r])
                        r--;
                    l++;
                    r--;
                }
                else if(sum>0)
                    r--;
                else // sum<0
                    l++;
            }
        }
        return result;
    }
};