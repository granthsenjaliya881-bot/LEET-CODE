class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count =0;
        sort(nums.begin(),nums.end());
        cout<<nums[n/2]; 
        return nums[n/2];
    }
};