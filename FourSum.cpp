class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       if (nums.size() < 4) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                int left = j + 1;
                int right = nums.size() - 1;
                int sum = target - nums[i] - nums[j];
                while (left < right)
                {
                    if (nums[left] + nums[right] < sum) left ++;
                    else if (nums[left] + nums[right] > sum) right --;
                    else
                    {
                        ret.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left ++;
                    }
                }
            }
        }
        if (ret.empty() == true) return ret;
        sort(ret.begin(), ret.end());
        int pos = 1;
        for (int i = 1; i < ret.size(); i++)
        {
            if (ret[i] == ret[i-1]) continue;
            ret[pos] = ret[i];
            pos ++;
        }
        ret.resize(pos);
        return ret;
    }
};