#define MAXINTEGER 2147483647
#define MININTEGER 0

#define MAX(a,b) ((a>b) ? a : b)
#define MIN(a,b) ((a<b) ? a : b)

typedef struct{
    bool used;
    int maxval;
    int minval;
}Bucket; //C语言结构体定义不能初始化！

int maximumGap(int* nums, int numsSize){
    if(numsSize < 2)
        return 0;
    
    Bucket* buckets;
    int bucketSize, bucketNum, bucketIndex;
    int nmax=MININTEGER, nmin=MAXINTEGER;
    int premax, maxdiff, i;

    for(i=0; i<numsSize; i++){
        nmax = MAX(nmax, nums[i]);
        nmin = MIN(nmin, nums[i]);
    }

    if(nmax == nmin)
        return 0;
    else{
        bucketSize = MAX(1, (nmax - nmin) / (numsSize-1));
        bucketNum = (nmax - nmin) / bucketSize + 1;
    }

    buckets = (Bucket *)malloc(sizeof(Bucket) * bucketNum);
    for(i=0; i<bucketNum; i++){
        buckets[i].used = false;
        buckets[i].maxval = MININTEGER;
        buckets[i].minval = MAXINTEGER;
    }

    for(i=0; i<numsSize; i++){
        bucketIndex = (nums[i] - nmin) / bucketSize;
        buckets[bucketIndex].used = true;
        buckets[bucketIndex].maxval = MAX(buckets[bucketIndex].maxval, nums[i]);
        buckets[bucketIndex].minval = MIN(buckets[bucketIndex].minval, nums[i]);
    }

    premax = nmin;
    maxdiff = 0;
    for(i=0; i<bucketNum; i++){
        if(buckets[i].used == false)
            continue;
        
        maxdiff = MAX(maxdiff, buckets[i].minval - premax);
        premax = buckets[i].maxval;
    }

    return maxdiff;
}
