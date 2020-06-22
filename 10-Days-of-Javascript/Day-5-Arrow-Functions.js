/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */

function modifyArray(nums) {

    for(let i=0; i<nums.length; i++){

        if(nums[i] % 2 == 0)
            nums[i] = nums[i] * 2;

        else if(nums[i] % 2 == 1)
            nums[i] = nums[i] * 3;

    }
    return nums;
    
}

function main() {
    const n = +(readLine());
    const a = readLine().split(' ').map(Number);
    
    console.log(modifyArray(a).toString().split(',').join(' '));
}
