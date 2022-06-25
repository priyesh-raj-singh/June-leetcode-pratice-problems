class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0 ;
        int mini = INT_MIN;
        for(int i = 0 ; i<nums.size()-1 and count<2 ; i++){
            if(nums[i]<=nums[i+1]){
                mini = nums[i];
            }
            
        
        else{
            if(nums[i+1]<mini) nums[i+1] = nums[i];
            else nums[i] = nums[i+1];
                
            count++;
        }
        }
        
        return count < 2;
        
    }
};