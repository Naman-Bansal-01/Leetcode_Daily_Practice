class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(mpp.find(req) != mpp.end())
            {
                res.push_back(i);
                res.push_back(mpp[req]);
                return res;
            }
             mpp[nums[i]]=i;
        }
      return res; 
    }
};