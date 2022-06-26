class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[high]<nums[mid]){
                low = mid+1;
            }
            else if(nums[mid]<nums[high])
                high = mid;
            else
                return nums[mid];
        }
        return 0;
        
    }
};