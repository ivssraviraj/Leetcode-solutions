class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        if(nums.size()==1)
            return nums.size();
        while(nums.begin()+i!=nums.end())
        {
            if(nums[i]==nums[i-1])
                nums.erase(nums.begin()+i);
            else
                i++;
        }
        return nums.size();
    }
};