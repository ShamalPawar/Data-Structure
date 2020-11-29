'''Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.'''
class Solution(object):
    def plusOne(self, digits):
        resultList = []
        listLen = len(digits)
        incVal = digits[listLen -1] + 1
        carry = incVal / 10
        incVal = incVal % 10
        resultList.insert(0, incVal)
        index = listLen - 2
        
        while(index >= 0):
            incVal = carry + digits[index];
            if(incVal > 9):
                carry = incVal / 10
                incVal = incVal % 10
            else:
                carry = 0
                
            resultList.insert(0, incVal)
            index =index - 1
            
        if(carry == 1):
            resultList.insert(0, 1)
        
        return resultList
            
