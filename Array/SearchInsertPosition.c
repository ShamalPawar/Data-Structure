/*
Problem Decription -
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
*/

int searchInsert(int* nums, int numsSize, int target){
    int Lindex, Rindex, mid, returnval;
    Lindex = 0;
    Rindex = numsSize - 1;
   
  
    while(Lindex <= Rindex)
    {
        if(Lindex == Rindex)
            mid = Lindex;
        else
        mid = Lindex + ((Rindex-Lindex)/2);
   
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(target < nums[mid])
        {
            Rindex = mid - 1;
           
        }
        else
        {
            Lindex = mid + 1;
           
        }
        
    }
    if(target > nums[mid])
    {
        return mid + 1;
    }
    else
    {
        return mid;
    }

}
