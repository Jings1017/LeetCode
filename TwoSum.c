class  Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
		vector<int> buffer;
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			for (int j = i+1; j < nums.size(); ++j)
			{
				if (nums[i] + nums[j] == target)
				{
					buffer.push_back(i);
					buffer.push_back(j);
					break;
				}
			}
		}
		return buffer;
    }
};