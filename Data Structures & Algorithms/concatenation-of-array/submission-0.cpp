class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
          vector<int> ans;
          int length = nums.size();
          int final_length = 2 * length;
          for(int i = 0 ; i < final_length; i++){
             if(i >= length){
                ans.push_back(nums[i-length]);
             } else{
                ans.push_back(nums[i]);
             }
             
          }
        return ans;
    }
};