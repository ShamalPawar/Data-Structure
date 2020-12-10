/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
Link - https://leetcode.com/problems/maximum-subarray/
*/
#define MAX(num1, num2) ((num1) > (num2) ? (num1) : (num2))

int maxSubArray(int* nums, int numsSize){
    int i, MasterResult, CurrentVal;
    MasterResult = nums[0];
    CurrentVal = nums[0];
    
    if(numsSize == 1)
        return nums[0];
    
    for(i = 1; i < numsSize; i++)
    {
        CurrentVal = MAX(nums[i], CurrentVal + nums[i]);
        MasterResult = MAX(CurrentVal, MasterResult);
    }
    
return MasterResult;
}
