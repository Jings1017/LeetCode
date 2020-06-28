class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result,tmp ;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                tmp.push_back(i);
            }
        }
        if(tmp.size()!=0){
            result.push_back(tmp[0]);
            result.push_back(tmp[tmp.size()-1]);
        }
        else{
            result.push_back(-1);
            result.push_back(-1);
        }
        
        return result;
    }
};