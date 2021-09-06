class Solution {
public:
    int work(vector<int>& nums, int k) {
        if (nums.size() <= k) {
            return nums.size();
        }
        int start = k;
        int end = k;
        for (; end < nums.size(); end++) {
            if (nums[end] != nums[start - k]) {   //end为当前遍历元素，start为待插入位置，即所求数组的最后一个元素的下一个位置，那么在数值上就等于所求数组长度
                nums[start] = nums[end];
                start++;
            }
        }
        return start;
    }
    int removeDuplicates(vector<int>& nums) 
    {
        return work(nums, 2);
    }
};
