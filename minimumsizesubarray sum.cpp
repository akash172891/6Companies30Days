//https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,n=nums.size();
        int sum = 0;
        int ans = INT_MAX;
        for(int j=0;j<n;j++){
            if(sum < target){
                sum += nums[j];
            }
            if(sum >= target){
                while(i <= j and sum >= target){
                    sum -= nums[i];
                    ans = min(ans,j-i+1);
                    i++;
                }
            }
            
        }
        if(ans==INT_MAX){
            return 0;
        }
        else{
            return ans;
        }
        
    
    }
};
