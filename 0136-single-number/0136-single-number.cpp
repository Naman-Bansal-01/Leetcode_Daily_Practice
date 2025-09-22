class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]+=1;

        }
        int val;
        for(auto &p: mp){
            if(p.second==1){
                val=p.first;
                break;
            }
        }
       return val; 
    }
};