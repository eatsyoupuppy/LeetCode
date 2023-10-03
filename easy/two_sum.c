#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *ptr = malloc(2 * sizeof(int));

    for(int i = 0; i < numsSize; i++){
        for(int y = i+1; y < numsSize; y++){
            if((nums[i] + nums[y]) == target){
                ptr[0] = i;
                ptr[1] = y;
                return ptr;
            
}        }
    }
    return ptr;
}



int main(){
    int numsSize = 3;
    int nums[10] = {3,2,4};
    int target = 6;
    int returnSize = 2;

    int* arr = twoSum(nums, numsSize, target, &returnSize);

    printf("[%d,%d]", arr[0], arr[1]);
    free(arr);

    return 0;
}