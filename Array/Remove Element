/*
Problem description - 
Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/



int removeElement(int* nums, int numsSize, int val){
    
    int newLen, frontindex, endindex;
    endindex = numsSize-1;
    newLen = numsSize;
    if((numsSize == 0) ||(numsSize == 1 && nums[0] == val))
        return 0;
    
        
    for(frontindex = 0; frontindex <= endindex; frontindex++)
    {
        while(nums[endindex] == val && endindex != 0)
        {
            endindex--;
            newLen--;
        }
        if(frontindex <= endindex)
        {
            if(nums[frontindex] == val)
            {
                nums[frontindex] = nums[endindex];

                endindex--;
                newLen--;
                 
            }
        }        
        
    }
    if(newLen == 1 && nums[0] == val)
        newLen = 0;
    
  return newLen;  
}
