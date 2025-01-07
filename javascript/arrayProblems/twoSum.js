var twoSum = function(nums, target) {

    const hash = {};
    let n = nums.length;

    for(let i = 0; i <= n -1; i ++){
        hash[nums[i]] = i;

    }
    for(let i = 0; i <= n -1; i ++){
        hash[nums[i]] = target - nums[i];
        if(hash[target-nums[i]]){
            return [i, hash[target-nums[i]]]
        }

      

    }
    return [];

};

console.log(twoSum([3,4,9,6,4], 8))