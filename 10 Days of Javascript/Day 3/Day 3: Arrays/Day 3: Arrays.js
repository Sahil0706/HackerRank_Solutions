

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    var i,maxele = nums[0];
    
    for(i=0; i<nums.length; i++)
        if(nums[i] > maxele)
            maxele = nums[i];
    var ans = 0;
    for(i=0; i<nums.length; i++)
        if(nums[i] < maxele && nums[i]>ans)
            ans = nums[i];
            
    return ans;
}

