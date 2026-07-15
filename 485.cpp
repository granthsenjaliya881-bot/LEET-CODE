class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int reset=0; 
      int count =0;

      for (int i=0;i<nums.size();i++)
      {
        if(nums[i]==1)
        {
            count++;
            reset=max(reset,count);


            
        }
        else 
        {
            count =0;
        }
      } 
      return reset;
    }
};