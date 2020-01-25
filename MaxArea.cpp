class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = 0;
        int head=0, tail=height.size()-1;
        while(head<tail)
        {
            maxA = max(maxA,(tail-head)*min(height.at(head),height.at(tail)));
            if(height.at(head)<=height.at(tail))
                head++;
            else 
                tail--;
        }
        return maxA;
    }
};