void swap(int *a, int *b) {
    int t ;
    t= *a;
    *a = *b; *b = t;
}

void sortColors(int *nums, int numsSize) {
    int p0 = 0 , p2 = numsSize-1;
    if(numsSize==0)
        return NULL;                         //首先分析数组为零的情况
    for(int i =0; i<=p2 ;i++ )               //因为 p2 以上的元素都是2，所以当 i 大于p2后就没有意义了
    {
        if(nums[i]==0){
            swap(&nums[i],&nums[p0]);
            ++p0;
        }       
        else if(nums[i]==2){               
            swap(&nums[i],&nums[p2]);
            --p2;
            if(nums[i]==2||nums[i]==0)       //如果刚好碰到 p2 处本身也为2或0，则换完后还是换一遍，所以提前--i，这样等他++i后，会再访问一遍此位置。
                --i;
        }
    }
    return nums;
}
