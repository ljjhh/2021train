class Solution {
    public int findPeakElement(int[] nums) {
    int i=0;
		  int mid=0;
		  int j=nums.length-1;
		  while(i<j) {
			  mid=i+(j-i)/2;
			  if(nums[mid]>nums[mid+1]) {
				  j=mid;
				  }else  {
					  i=mid+1;
					  
            }  }
		  
		 return i;
		  
    }
}
