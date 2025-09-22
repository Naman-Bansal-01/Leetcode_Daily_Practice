class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int a=n*(n+1)/2;
        for(int x:nums){
            a-=x;

        }
        return a;
        
    }
};