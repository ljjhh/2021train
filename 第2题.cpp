class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n, head,tail,mid;
        n=nums.size()-1;
        for(head=0,tail=n;head<=tail;){
            mid=(head+tail)/2;
            if(target<nums[mid]){
                tail=mid-1;
            }
            else if(target>nums[mid]){
                head=mid+1;
            }
            else return mid;
        }
        return -1;//如果没找到就返回-1
    }
};
