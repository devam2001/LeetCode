class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
    int sum = 0;
       for(int i=0; i<nums.size()-1;i++){
           if(nums[i+1] + nums [i+2] > nums[i])
               return nums[i]+nums[i+1]+nums[i+2];
       }
            return 0;
    }
};