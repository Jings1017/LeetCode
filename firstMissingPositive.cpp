class Solution {
    public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=0 || nums[i]>nums.size())
                continue;
            if(nums[i]==k)
                k++;
            else if(nums[i]<k)
                continue;
            else
                return k;
        }
        return k;
    }
};