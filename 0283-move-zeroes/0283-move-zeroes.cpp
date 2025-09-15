class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                a=i;
                break;
            }
        }
        if(a >=n){
            return;
        }
        
        for(int i=a+1;i<n;i++){
            if(nums[i]!=0){
                nums[a]=nums[i];
                a++;
            }
        }
        for(int i=a;i<n;i++){
            nums[i]=0;
        }
        
    }
};