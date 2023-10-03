#include <stdio.h>
#include <stdbool.h>

bool isMonotonic(int* nums, int numsSize){
	bool inc = true, dec = true;
	for(int i = 0; i < (numsSize - 1); i++){
		if(nums[i] > nums[i+1])
			inc = false;
		if(nums[i] < nums[i+1])
			dec = false;
	}
	return inc | dec;
}


int main(){
	int nums[10] = {1,2,2,3};
	int numsSize = 4;

	bool ismono = isMonotonic(nums, numsSize);
	printf("%d", ismono);


	return 0; 
}