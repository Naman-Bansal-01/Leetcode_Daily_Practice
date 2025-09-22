class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int a=n*(n+1)/2;
        int b=0;
        for(int x:nums){
            b+=x;

        }
        return a-b;
        
    }
};