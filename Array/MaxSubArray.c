/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Link - https://leetcode.com/problems/maximum-subarray/
*/

int maxSubArray(int* nums, int numsSize){
    int innerIndex, outerIndex;
    int masterSum, sum = nums[0];
    masterSum = nums[0];
    for(outerIndex = 0; outerIndex < numsSize; outerIndex++)
    {
        sum = 0;
        for(innerIndex = outerIndex; innerIndex < numsSize; innerIndex++)
        {
            sum = sum + nums[innerIndex];
            if(masterSum < sum)
                masterSum = sum;
        }
    }
    printf("MasterSum = %d\n",masterSum);
    return masterSum;

}
