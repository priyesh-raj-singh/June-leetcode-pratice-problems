class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int window = 0 , i = 0 , j = 0 , ans = 0 ;
        while(j<nums.size()){
            if(nums[j]>right){
                window = 0 ; 
                i = j+1;
            }
            else if(nums[j]<left){
                ans+=window;
            }
            else{
                window = j - i +1;
                ans+=window;
            }
            j++;
        }
        return ans;
        
    }
};