int cmpfunc(const void* a,const void* b){
    return *(int *)a - *(int *)b;
}
int majorityElement(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    int count=1;
    for (int i=1;i<numsSize;++i){
        if(nums[i-1] == nums[i]) count++;
        else count=1;
        if(count > numsSize/2) return nums[i];
    }
    return nums[0];
}
